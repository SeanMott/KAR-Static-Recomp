//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_DLInsert(PPC::Runtime::GCContext* context)
{
/*803D3560 003D0360*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x0);
/*803D3564 003D0364*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803D3568 003D0368*/ PPC::Runtime::ASM::b(.L_803D357C);
RUNTIME_PPC_JUMP_LABEL(.L_803D356C, 0x803D356C) //this is a jump label
/*803D356C 003D036C*/ PPC::Runtime::ASM::cmplw(context->r4, context->r7);
/*803D3570 003D0370*/ PPC::Runtime::ASM::ble(.L_803D3584);
/*803D3574 003D0374*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*803D3578 003D0378*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_803D357C, 0x803D357C) //this is a jump label
/*803D357C 003D037C*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*803D3580 003D0380*/ PPC::Runtime::ASM::bne(.L_803D356C);
RUNTIME_PPC_JUMP_LABEL(.L_803D3584, 0x803D3584) //this is a jump label
/*803D3584 003D0384*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803D3588 003D0388*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*803D358C 003D038C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803D3590 003D0390*/ PPC::Runtime::ASM::beq(.L_803D35C8);
/*803D3594 003D0394*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803D3598 003D0398*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803D359C 003D039C*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r5);
/*803D35A0 003D03A0*/ PPC::Runtime::ASM::cmplw(context->r0, context->r7);
/*803D35A4 003D03A4*/ PPC::Runtime::ASM::bne(.L_803D35C8);
/*803D35A8 003D03A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803D35AC 003D03AC*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*803D35B0 003D03B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803D35B4 003D03B4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803D35B8 003D03B8*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*803D35BC 003D03BC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803D35C0 003D03C0*/ PPC::Runtime::ASM::beq(.L_803D35C8);
/*803D35C4 003D03C4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_803D35C8, 0x803D35C8) //this is a jump label
/*803D35C8 003D03C8*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*803D35CC 003D03CC*/ PPC::Runtime::ASM::beq(.L_803D3604);
/*803D35D0 003D03D0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803D35D4 003D03D4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803D35D8 003D03D8*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803D35DC 003D03DC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*803D35E0 003D03E0*/ PPC::Runtime::ASM::bnelr();
/*803D35E4 003D03E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803D35E8 003D03E8*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*803D35EC 003D03EC*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*803D35F0 003D03F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803D35F4 003D03F4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803D35F8 003D03F8*/ PPC::Runtime::ASM::beqlr();
/*803D35FC 003D03FC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803D3600 003D0400*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803D3604, 0x803D3604) //this is a jump label
/*803D3604 003D0404*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803D3608 003D0408*/ PPC::Runtime::ASM::blr();
}