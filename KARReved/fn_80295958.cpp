//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295958(PPC::Runtime::GCContext* context)
{
/*80295958 00292758*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029595C 0029275C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80295960 00292760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80295964 00292764*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80295968 00292768*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8029596C 0029276C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80295970 00292770*/ PPC::Runtime::ASM::bctrl();
/*80295974 00292774*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80295978 00292778*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029597C 0029277C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80295980 00292780*/ PPC::Runtime::ASM::blr();
}