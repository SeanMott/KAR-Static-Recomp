//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8043A634.hpp"
#include "fn_8043A634.hpp"



void fn_8043B92C(PPC::Runtime::GCContext* context)
{
/*8043B92C 0043872C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8043B930 00438730*/ PPC::Runtime::ASM::mflr(context->r0);
/*8043B934 00438734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043B938 00438738*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8043B93C 0043873C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8043B940 00438740*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x78);
/*8043B944 00438744*/ PPC::Runtime::ASM::bge(.L_8043B954);
/*8043B948 00438748*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8043B94C 0043874C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8043B950 00438750*/ PPC::Runtime::ASM::b(.L_8043BA14);
RUNTIME_PPC_JUMP_LABEL(.L_8043B954, 0x8043B954) //this is a jump label
/*8043B954 00438754*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043B958 00438758*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043B95C 0043875C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8043B960 00438760*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043B964 00438764*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043B968 00438768*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8043B96C 0043876C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8043B970 00438770*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*8043B974 00438774*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8043B978 00438778*/ PPC::Runtime::ASM::bl(fn_8043A634);
/* 8043B97C 0043877C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8043B980 00438780*/ PPC::Runtime::ASM::bne(.L_8043BA0C);
/*8043B984 00438784*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8043B988 00438788*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043B98C 0043878C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8043B990 00438790*/ PPC::Runtime::ASM::bl(fn_8043A634);
/* 8043B994 00438794  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8043B998 00438798*/ PPC::Runtime::ASM::bne(.L_8043BA0C);
/*8043B99C 0043879C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043B9A0 004387A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043B9A4 004387A4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043B9A8 004387A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8043B9AC 004387AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r4));
/*8043B9B0 004387B0*/ PPC::Runtime::ASM::b(.L_8043B9C0);
RUNTIME_PPC_JUMP_LABEL(.L_8043B9B4, 0x8043B9B4) //this is a jump label
/*8043B9B4 004387B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8043B9B8 004387B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8043B9BC 004387BC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043B9C0, 0x8043B9C0) //this is a jump label
/*8043B9C0 004387C0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8043B9C4 004387C4*/ PPC::Runtime::ASM::bne(.L_8043B9B4);
/*8043B9C8 004387C8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80508288 @ Get_MemoryOffset_HighBit);
/*8043B9CC 004387CC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043B9D0 004387D0*/ PPC::Runtime::ASM::addic.(context->r3, context->r3, lbl_80508288 @ Get_MemoryOffset_LowBit);
/*8043B9D4 004387D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r4));
/*8043B9D8 004387D8*/ PPC::Runtime::ASM::beq(.L_8043B9F8);
/*8043B9DC 004387DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8043B9E0 004387E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8043B9E4 004387E4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8043B9E8 004387E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r4));
/*8043B9EC 004387EC*/ PPC::Runtime::ASM::beq(.L_8043B9F8);
/*8043B9F0 004387F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8043B9F4 004387F4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8043B9F8, 0x8043B9F8) //this is a jump label
/*8043B9F8 004387F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043B9FC 004387FC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8043BA00 00438800*/ PPC::Runtime::ASM::lbzu(context->r0, lbl_8058D1C0 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8043BA04 00438804*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8043BA08 00438808*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8043BA0C, 0x8043BA0C) //this is a jump label
/*8043BA0C 0043880C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8043BA10 00438810*/ PPC::Runtime::ASM::b(.L_8043BA18);
RUNTIME_PPC_JUMP_LABEL(.L_8043BA14, 0x8043BA14) //this is a jump label
/*8043BA14 00438814*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8043BA18, 0x8043BA18) //this is a jump label
/*8043BA18 00438818*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043BA1C 0043881C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8043BA20 00438820*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043BA24 00438824*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8043BA28 00438828*/ PPC::Runtime::ASM::blr();
}