//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E85A8.hpp"



void fn_8010E5B0(PPC::Runtime::GCContext* context)
{
/*8010E5B0 0010B3B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010E5B4 0010B3B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010E5B8 0010B3B8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6360 @ Get_MemoryOffset_SDA21);
/*8010E5BC 0010B3BC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8010E5C0 0010B3C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010E5C4 0010B3C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010E5C8 0010B3C8*/ PPC::Runtime::ASM::bl(fn_800E85A8);
/*8010E5CC 0010B3CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010E5D0 0010B3D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010E5D4 0010B3D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010E5D8 0010B3D8*/ PPC::Runtime::ASM::blr();
}