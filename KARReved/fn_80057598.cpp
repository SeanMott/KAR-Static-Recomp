//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80057598(PPC::Runtime::GCContext* context)
{
/*80057598 00054398*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005759C 0005439C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800575A0 000543A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800575A4 000543A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800575A8 000543A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800575AC 000543AC*/ PPC::Runtime::ASM::b(.L_800575EC);
RUNTIME_PPC_JUMP_LABEL(.L_800575B0, 0x800575B0) //this is a jump label
/*800575B0 000543B0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800575B4 000543B4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*800575B8 000543B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*800575BC 000543BC*/ PPC::Runtime::ASM::bne(.L_800575D8);
/*800575C0 000543C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800575C4 000543C4*/ PPC::Runtime::ASM::bl(fn_HSD_LObjGetFlags);
/*800575C8 000543C8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 26, 26);
/*800575CC 000543CC*/ PPC::Runtime::ASM::bne(.L_800575D8);
/*800575D0 000543D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800575D4 000543D4*/ PPC::Runtime::ASM::b(.L_8005760C);
RUNTIME_PPC_JUMP_LABEL(.L_800575D8, 0x800575D8) //this is a jump label
/*800575D8 000543D8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800575DC 000543DC*/ PPC::Runtime::ASM::bne(.L_800575E8);
/*800575E0 000543E0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800575E4 000543E4*/ PPC::Runtime::ASM::b(.L_800575EC);
RUNTIME_PPC_JUMP_LABEL(.L_800575E8, 0x800575E8) //this is a jump label
/*800575E8 000543E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800575EC, 0x800575EC) //this is a jump label
/*800575EC 000543EC*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800575F0 000543F0*/ PPC::Runtime::ASM::bne(.L_800575B0);
/*800575F4 000543F4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_185 @ Get_MemoryOffset_HighBit);
/*800575F8 000543F8*/ PPC::Runtime::ASM::li(context->r4, 0x3c);
/*800575FC 000543FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_185 @ Get_MemoryOffset_LowBit);
/*80057600 00054400*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5238 @ Get_MemoryOffset_SDA21);
/*80057604 00054404*/ PPC::Runtime::ASM::bl(fn___assert);
/*80057608 00054408*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8005760C, 0x8005760C) //this is a jump label
/*8005760C 0005440C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80057610 00054410*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80057614 00054414*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80057618 00054418*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005761C 0005441C*/ PPC::Runtime::ASM::blr();
}