//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037B33C.hpp"



void fn_8032DBCC(PPC::Runtime::GCContext* context)
{
/*8032DBCC 0032A9CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8032DBD0 0032A9D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032DBD4 0032A9D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 8032DBD8 0032A9D8  54 80 06 3F */ clrlwi. context->r0 , context->r4 , 24
/*8032DBDC 0032A9DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8032DBE0 0032A9E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8032DBE4 0032A9E4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8032DBE8 0032A9E8*/ PPC::Runtime::ASM::beq(.L_8032DC44);
/*8032DBEC 0032A9EC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032DBF0 0032A9F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032DBF4 0032A9F4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA908 @ Get_MemoryOffset_SDA21);
/*8032DBF8 0032A9F8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA900 @ Get_MemoryOffset_SDA21);
/*8032DBFC 0032A9FC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032DC00 0032AA00*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8032DC04 0032AA04*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E4738 @ Get_MemoryOffset_HighBit);
/*8032DC08 0032AA08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8032DC0C 0032AA0C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804E4738 @ Get_MemoryOffset_LowBit);
/*8032DC10 0032AA10*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032DC14 0032AA14*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8032DC18 0032AA18*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*8032DC1C 0032AA1C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032DC20 0032AA20*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8032DC24 0032AA24*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*8032DC28 0032AA28*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*8032DC2C 0032AA2C*/ PPC::Runtime::ASM::li(context->r4, 0x2799);
/*8032DC30 0032AA30*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8032DC34 0032AA34*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032DC38 0032AA38*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8032DC3C 0032AA3C*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8032DC40 0032AA40*/ PPC::Runtime::ASM::b(.L_8032DC50);
RUNTIME_PPC_JUMP_LABEL(.L_8032DC44, 0x8032DC44) //this is a jump label
/*8032DC44 0032AA44*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*8032DC48 0032AA48*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032DC4C 0032AA4C*/ PPC::Runtime::ASM::bl(fn_8037B33C);
RUNTIME_PPC_JUMP_LABEL(.L_8032DC50, 0x8032DC50) //this is a jump label
/*8032DC50 0032AA50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032DC54 0032AA54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8032DC58 0032AA58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8032DC5C 0032AA5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8032DC60 0032AA60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8032DC64 0032AA64*/ PPC::Runtime::ASM::blr();
}