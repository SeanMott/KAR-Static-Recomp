//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F446C.hpp"
#include "fn_80100834.hpp"



void fn_801007FC(PPC::Runtime::GCContext* context)
{
/*801007FC 000FD5FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80100800 000FD600*/ PPC::Runtime::ASM::mflr(context->r0);
/*80100804 000FD604*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80100808 000FD608*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010080C 000FD60C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80100810 000FD610*/ PPC::Runtime::ASM::li(context->r3, 0x34);
/*80100814 000FD614*/ PPC::Runtime::ASM::bl(fn_800F446C);
/*80100818 000FD618*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8010081C 000FD61C*/ PPC::Runtime::ASM::bl(fn_80100834);
/*80100820 000FD620*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80100824 000FD624*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80100828 000FD628*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010082C 000FD62C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80100830 000FD630*/ PPC::Runtime::ASM::blr();
}