//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D1F8.hpp"



void fn_803056FC(PPC::Runtime::GCContext* context)
{
/*803056FC 003024FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80305700 00302500*/ PPC::Runtime::ASM::mflr(context->r0);
/*80305704 00302504*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80305708 00302508*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8030570C 0030250C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80305710 00302510*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r3));
/*80305714 00302514*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80305718 00302518*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8030571C 0030251C*/ PPC::Runtime::ASM::blr();
}