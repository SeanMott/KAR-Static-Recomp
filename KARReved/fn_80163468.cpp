//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131254.hpp"
#include "fn_80059520.hpp"



void fn_80163468(PPC::Runtime::GCContext* context)
{
/*80163468 00160268*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016346C 0016026C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80163470 00160270*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80163474 00160274*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80163478 00160278*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016347C 0016027C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80163480 00160280*/ PPC::Runtime::ASM::bl(fn_80131254);
/*80163484 00160284*/ PPC::Runtime::ASM::lis(context->r4, String_ "ScMenSelstadiumPos_scene_model" Get_MemoryOffset_HighBit);
/*80163488 00160288*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016348C 0016028C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_ "ScMenSelstadiumPos_scene_model" Get_MemoryOffset_LowBit);
/*80163490 00160290*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80163494 00160294*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x968);
/*80163498 00160298*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8016349C 0016029C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801634A0 001602A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801634A4 001602A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801634A8 001602A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801634AC 001602AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801634B0 001602B0*/ PPC::Runtime::ASM::blr();
}