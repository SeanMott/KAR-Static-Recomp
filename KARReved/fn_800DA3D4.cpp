//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetCurrentStageKind_StartposId.hpp"



void fn_800DA3D4(PPC::Runtime::GCContext* context)
{
/*800DA3D4 000D71D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800DA3D8 000D71D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DA3DC 000D71DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DA3E0 000D71E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DA3E4 000D71E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800DA3E8 000D71E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800DA3EC 000D71EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800DA3F0 000D71F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800DA3F4 000D71F4*/ PPC::Runtime::ASM::beq(.L_800DA40C);
/*800DA3F8 000D71F8*/ PPC::Runtime::ASM::bl(fn_stGetCurrentStageKind_StartposId);
/*800DA3FC 000D71FC*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*800DA400 000D7200*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800DA404 000D7204*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*800DA408 000D7208*/ PPC::Runtime::ASM::b(.L_800DA410);
RUNTIME_PPC_JUMP_LABEL(.L_800DA40C, 0x800DA40C) //this is a jump label
/*800DA40C 000D720C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800DA410, 0x800DA410) //this is a jump label
/*800DA410 000D7210*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DA414 000D7214*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DA418 000D7218*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DA41C 000D721C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800DA420 000D7220*/ PPC::Runtime::ASM::blr();
}