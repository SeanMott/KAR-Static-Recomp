//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8010F684.hpp"



void fn_800D5698(PPC::Runtime::GCContext* context)
{
/*800D5698 000D2498*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D569C 000D249C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D56A0 000D24A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D56A4 000D24A4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D56A8 000D24A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800D56AC 000D24AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x9);
/*800D56B0 000D24B0*/ PPC::Runtime::ASM::bne(.L_800D56BC);
/*800D56B4 000D24B4*/ PPC::Runtime::ASM::bl(fn_8010F684);
/*800D56B8 000D24B8*/ PPC::Runtime::ASM::b(.L_800D56C0);
RUNTIME_PPC_JUMP_LABEL(.L_800D56BC, 0x800D56BC) //this is a jump label
/*800D56BC 000D24BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D56C0, 0x800D56C0) //this is a jump label
/*800D56C0 000D24C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D56C4 000D24C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D56C8 000D24C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D56CC 000D24CC*/ PPC::Runtime::ASM::blr();
}