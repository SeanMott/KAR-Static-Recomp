//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_ObjFree.hpp"



void fn_HSD_SListRemove(PPC::Runtime::GCContext* context)
{
/*8041BE88 00418C88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041BE8C 00418C8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041BE90 00418C90*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041BE94 00418C94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041BE98 00418C98*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041BE9C 00418C9C*/ PPC::Runtime::ASM::beq(.L_8041BEC0);
/*8041BEA0 00418CA0*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058BE28 @ Get_MemoryOffset_HighBit);
/*8041BEA4 00418CA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8041BEA8 00418CA8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_8058BE28 @ Get_MemoryOffset_LowBit);
/*8041BEAC 00418CAC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8041BEB0 00418CB0*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*8041BEB4 00418CB4*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*8041BEB8 00418CB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8041BEBC 00418CBC*/ PPC::Runtime::ASM::b(.L_8041BEC4);
RUNTIME_PPC_JUMP_LABEL(.L_8041BEC0, 0x8041BEC0) //this is a jump label
/*8041BEC0 00418CC0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8041BEC4, 0x8041BEC4) //this is a jump label
/*8041BEC4 00418CC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041BEC8 00418CC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041BECC 00418CCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041BED0 00418CD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041BED4 00418CD4*/ PPC::Runtime::ASM::blr();
}