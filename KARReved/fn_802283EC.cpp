//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191FFC.hpp"
#include "fn_80191F18.hpp"
#include "fn_80191EF8.hpp"
#include "fn_80062DD0.hpp"



void fn_802283EC(PPC::Runtime::GCContext* context)
{
/*802283EC 002251EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802283F0 002251F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802283F4 002251F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802283F8 002251F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802283FC 002251FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80228400 00225200*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xac);
/*80228404 00225204*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80228408 00225208*/ PPC::Runtime::ASM::bl(fn_80191FFC);
/*8022840C 0022520C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80228410 00225210*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xdc);
/*80228414 00225214*/ PPC::Runtime::ASM::bl(fn_80191F18);
/*80228418 00225218*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8022841C 0022521C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd0);
/*80228420 00225220*/ PPC::Runtime::ASM::bl(fn_80191EF8);
/*80228424 00225224*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xdc);
/*80228428 00225228*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd0);
/*8022842C 0022522C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xe8);
/*80228430 00225230*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80228434 00225234*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80228438 00225238*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022843C 0022523C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80228440 00225240*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80228444 00225244*/ PPC::Runtime::ASM::blr();
}