//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801717C0(PPC::Runtime::GCContext* context)
{
/*801717C0 0016E5C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801717C4 0016E5C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801717C8 0016E5C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801717CC 0016E5CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801717D0 0016E5D0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801717D4 0016E5D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801717D8 0016E5D8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801717DC 0016E5DC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801717E0 0016E5E0*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*801717E4 0016E5E4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801717E8 0016E5E8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801717EC 0016E5EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc58, context->r3));
/*801717F0 0016E5F0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801717F4 0016E5F4*/ PPC::Runtime::ASM::beq(.L_80171814);
/*801717F8 0016E5F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801717FC 0016E5FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*80171800 0016E600*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80171804 0016E604*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80171808 0016E608*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8017180C 0016E60C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*80171810 0016E610*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80171814, 0x80171814) //this is a jump label
/*80171814 0016E614*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80171818 0016E618*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017181C 0016E61C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80171820 0016E620*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80171824 0016E624*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80171828 0016E628*/ PPC::Runtime::ASM::blr();
}