//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_SetInterruptMask.hpp"
#include "OSRestoreInterrupts.hpp"



void __OSMaskInterrupts(PPC::Runtime::GCContext* context)
{
/*803D7470 003D4270*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D7474 003D4274*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D7478 003D4278*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803D747C 003D427C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D7480 003D4280*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D7484 003D4284*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D7488 003D4288*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803D748C 003D428C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803D7490 003D4290*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*803D7494 003D4294*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r4));
/*803D7498 003D4298*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803D749C 003D429C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r4));
/*803D74A0 003D42A0*/ PPC::Runtime::ASM::or(context->r0, context->r29, context->r5);
/*803D74A4 003D42A4*/ PPC::Runtime::ASM::andc(context->r3, context->r31, context->r0);
/*803D74A8 003D42A8*/ PPC::Runtime::ASM::or(context->r31, context->r31, context->r29);
/*803D74AC 003D42AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r4));
/*803D74B0 003D42B0*/ PPC::Runtime::ASM::or(context->r31, context->r31, context->r5);
/*803D74B4 003D42B4*/ PPC::Runtime::ASM::b(.L_803D74B8);
RUNTIME_PPC_JUMP_LABEL(.L_803D74B8, 0x803D74B8) //this is a jump label
/*803D74B8 003D42B8*/ PPC::Runtime::ASM::b(.L_803D74BC);
RUNTIME_PPC_JUMP_LABEL(.L_803D74BC, 0x803D74BC) //this is a jump label
/*803D74BC 003D42BC*/ PPC::Runtime::ASM::b(.L_803D74C8);
RUNTIME_PPC_JUMP_LABEL(.L_803D74C0, 0x803D74C0) //this is a jump label
/*803D74C0 003D42C0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803D74C4 003D42C4*/ PPC::Runtime::ASM::bl(fn_SetInterruptMask);
RUNTIME_PPC_JUMP_LABEL(.L_803D74C8, 0x803D74C8) //this is a jump label
/*803D74C8 003D42C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D74CC 003D42CC*/ PPC::Runtime::ASM::bne(.L_803D74C0);
/*803D74D0 003D42D0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803D74D4 003D42D4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803D74D8 003D42D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803D74DC 003D42DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D74E0 003D42E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D74E4 003D42E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D74E8 003D42E8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D74EC 003D42EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803D74F0 003D42F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D74F4 003D42F4*/ PPC::Runtime::ASM::blr();
}