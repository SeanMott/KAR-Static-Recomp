//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015E020.hpp"



void fn_80135950(PPC::Runtime::GCContext* context)
{
/*80135950 00132750*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135954 00132754*/ PPC::Runtime::ASM::mflr(context->r0);
/*80135958 00132758*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013595C 0013275C*/ PPC::Runtime::ASM::bl(fn_8015E020);
/*80135960 00132760*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135964 00132764*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80135968 00132768*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013596C 0013276C*/ PPC::Runtime::ASM::blr();
}