//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000AECC.hpp"
#include "fn_8000AECC.hpp"
#include "fn_80286FEC.hpp"



void fn_8007666C(PPC::Runtime::GCContext* context)
{
/*8007666C 0007346C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80076670 00073470*/ PPC::Runtime::ASM::mflr(context->r0);
/*80076674 00073474*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80076678 00073478*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007667C 0007347C*/ PPC::Runtime::ASM::li(context->r31, STRUCT_BYTE4_COUNT_1805DD5D8 @ Get_MemoryOffset_SDA21);
/*80076680 00073480*/ PPC::Runtime::ASM::bl(fn_8000AECC);
/*80076684 00073484*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80076688 00073488*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x13);
/*8007668C 0007348C*/ PPC::Runtime::ASM::beq(.L_800766A0);
/*80076690 00073490*/ PPC::Runtime::ASM::bl(fn_8000AECC);
/*80076694 00073494*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80076698 00073498*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x14);
/*8007669C 0007349C*/ PPC::Runtime::ASM::bne(.L_800766A8);
RUNTIME_PPC_JUMP_LABEL(.L_800766A0, 0x800766A0) //this is a jump label
/*800766A0 000734A0*/ PPC::Runtime::ASM::bl(fn_80286FEC);
/*800766A4 000734A4*/ PPC::Runtime::ASM::b(.L_800766AC);
RUNTIME_PPC_JUMP_LABEL(.L_800766A8, 0x800766A8) //this is a jump label
/*800766A8 000734A8*/ PPC::Runtime::ASM::bl(fn_HSD_PadRumbleActiveAll);
RUNTIME_PPC_JUMP_LABEL(.L_800766AC, 0x800766AC) //this is a jump label
/*800766AC 000734AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800766B0 000734B0*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*800766B4 000734B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800766B8 000734B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800766BC 000734BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800766C0 000734C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800766C4 000734C4*/ PPC::Runtime::ASM::blr();
}