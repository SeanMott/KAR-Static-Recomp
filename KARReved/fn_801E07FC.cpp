//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190E78.hpp"



void fn_801E07FC(PPC::Runtime::GCContext* context)
{
/*801E07FC 001DD5FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E0800 001DD600*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E0804 001DD604*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801E0808 001DD608*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E080C 001DD60C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801E0810 001DD610*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801E0814 001DD614*/ PPC::Runtime::ASM::beq(.L_801E0828);
/*801E0818 001DD618*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801E081C 001DD61C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xb2c);
/*801E0820 001DD620*/ PPC::Runtime::ASM::bl(fn_80190E78);
/*801E0824 001DD624*/ PPC::Runtime::ASM::b(.L_801E082C);
RUNTIME_PPC_JUMP_LABEL(.L_801E0828, 0x801E0828) //this is a jump label
/*801E0828 001DD628*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801E082C, 0x801E082C) //this is a jump label
/*801E082C 001DD62C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0830 001DD630*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E0834 001DD634*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E0838 001DD638*/ PPC::Runtime::ASM::blr();
}