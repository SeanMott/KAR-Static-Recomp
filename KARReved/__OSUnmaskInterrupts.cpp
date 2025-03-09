//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_SetInterruptMask.hpp"
#include "OSRestoreInterrupts.hpp"



void __OSUnmaskInterrupts(PPC::Runtime::GCContext* context)
{
/*803D74F8 003D42F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D74FC 003D42FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D7500 003D4300*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803D7504 003D4304*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D7508 003D4308*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D750C 003D430C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D7510 003D4310*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803D7514 003D4314*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803D7518 003D4318*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*803D751C 003D431C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r4));
/*803D7520 003D4320*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803D7524 003D4324*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r4));
/*803D7528 003D4328*/ PPC::Runtime::ASM::or(context->r0, context->r29, context->r5);
/*803D752C 003D432C*/ PPC::Runtime::ASM::and(context->r3, context->r31, context->r0);
/*803D7530 003D4330*/ PPC::Runtime::ASM::andc(context->r31, context->r29, context->r31);
/*803D7534 003D4334*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r4));
/*803D7538 003D4338*/ PPC::Runtime::ASM::or(context->r31, context->r31, context->r5);
/*803D753C 003D433C*/ PPC::Runtime::ASM::b(.L_803D7540);
RUNTIME_PPC_JUMP_LABEL(.L_803D7540, 0x803D7540) //this is a jump label
/*803D7540 003D4340*/ PPC::Runtime::ASM::b(.L_803D7544);
RUNTIME_PPC_JUMP_LABEL(.L_803D7544, 0x803D7544) //this is a jump label
/*803D7544 003D4344*/ PPC::Runtime::ASM::b(.L_803D7550);
RUNTIME_PPC_JUMP_LABEL(.L_803D7548, 0x803D7548) //this is a jump label
/*803D7548 003D4348*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803D754C 003D434C*/ PPC::Runtime::ASM::bl(fn_SetInterruptMask);
RUNTIME_PPC_JUMP_LABEL(.L_803D7550, 0x803D7550) //this is a jump label
/*803D7550 003D4350*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D7554 003D4354*/ PPC::Runtime::ASM::bne(.L_803D7548);
/*803D7558 003D4358*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803D755C 003D435C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803D7560 003D4360*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803D7564 003D4364*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D7568 003D4368*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D756C 003D436C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D7570 003D4370*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D7574 003D4374*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803D7578 003D4378*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D757C 003D437C*/ PPC::Runtime::ASM::blr();
}