//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80071D48.hpp"
#include "fn_RumbleController.hpp"



void fn_800AF51C(PPC::Runtime::GCContext* context)
{
/*800AF51C 000AC31C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AF520 000AC320*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AF524 000AC324*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AF528 000AC328*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF52C 000AC32C*/ PPC::Runtime::ASM::bne(.L_800AF550);
/*800AF530 000AC330*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF534 000AC334*/ PPC::Runtime::ASM::bl(fn_80071D48);
/*800AF538 000AC338*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD6B8 @ Get_MemoryOffset_SDA21);
/*800AF53C 000AC33C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD6B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AF540 000AC340*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800AF544 000AC344*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF548 000AC348*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800AF54C 000AC34C*/ PPC::Runtime::ASM::bl(fn_RumbleController);
RUNTIME_PPC_JUMP_LABEL(.L_800AF550, 0x800AF550) //this is a jump label
/*800AF550 000AC350*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF554 000AC354*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF558 000AC358*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AF55C 000AC35C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AF560 000AC360*/ PPC::Runtime::ASM::blr();
}