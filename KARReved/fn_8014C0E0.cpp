//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8014C0E0(PPC::Runtime::GCContext* context)
{
/*8014C0E0 00148EE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014C0E4 00148EE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014C0E8 00148EE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C0EC 00148EEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014C0F0 00148EF0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014C0F4 00148EF4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014C0F8 00148EF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8014C0FC 00148EFC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8014C100 00148F00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C104 00148F04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014C108 00148F08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014C10C 00148F0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014C110 00148F10*/ PPC::Runtime::ASM::blr();
}