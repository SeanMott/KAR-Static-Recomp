//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_Free.hpp"
#include "fn_HSD_Free.hpp"
#include "fn_HSD_Free.hpp"
#include "fn_HSD_Free.hpp"
#include "fn_HSD_Free.hpp"
#include "fn_HSD_Free.hpp"
#include "fn_HSD_Free.hpp"



void fn_8041E540(PPC::Runtime::GCContext* context)
{
/*8041E540 0041B340*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041E544 0041B344*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041E548 0041B348*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041E54C 0041B34C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8041E550 0041B350  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8041E554 0041B354*/ PPC::Runtime::ASM::beq(.L_8041E5CC);
/*8041E558 0041B358*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/* 8041E55C 0041B35C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*8041E560 0041B360*/ PPC::Runtime::ASM::bne(.L_8041E5C4);
/*8041E564 0041B364*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8041E568 0041B368*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041E56C 0041B36C*/ PPC::Runtime::ASM::beq(.L_8041E574);
/*8041E570 0041B370*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
RUNTIME_PPC_JUMP_LABEL(.L_8041E574, 0x8041E574) //this is a jump label
/*8041E574 0041B374*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8041E578 0041B378*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041E57C 0041B37C*/ PPC::Runtime::ASM::beq(.L_8041E584);
/*8041E580 0041B380*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
RUNTIME_PPC_JUMP_LABEL(.L_8041E584, 0x8041E584) //this is a jump label
/*8041E584 0041B384*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8041E588 0041B388*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041E58C 0041B38C*/ PPC::Runtime::ASM::beq(.L_8041E594);
/*8041E590 0041B390*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
RUNTIME_PPC_JUMP_LABEL(.L_8041E594, 0x8041E594) //this is a jump label
/*8041E594 0041B394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8041E598 0041B398*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041E59C 0041B39C*/ PPC::Runtime::ASM::beq(.L_8041E5A4);
/*8041E5A0 0041B3A0*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
RUNTIME_PPC_JUMP_LABEL(.L_8041E5A4, 0x8041E5A4) //this is a jump label
/*8041E5A4 0041B3A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8041E5A8 0041B3A8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041E5AC 0041B3AC*/ PPC::Runtime::ASM::beq(.L_8041E5B4);
/*8041E5B0 0041B3B0*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
RUNTIME_PPC_JUMP_LABEL(.L_8041E5B4, 0x8041E5B4) //this is a jump label
/*8041E5B4 0041B3B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8041E5B8 0041B3B8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041E5BC 0041B3BC*/ PPC::Runtime::ASM::beq(.L_8041E5C4);
/*8041E5C0 0041B3C0*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
RUNTIME_PPC_JUMP_LABEL(.L_8041E5C4, 0x8041E5C4) //this is a jump label
/*8041E5C4 0041B3C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8041E5C8 0041B3C8*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
RUNTIME_PPC_JUMP_LABEL(.L_8041E5CC, 0x8041E5CC) //this is a jump label
/*8041E5CC 0041B3CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041E5D0 0041B3D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041E5D4 0041B3D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041E5D8 0041B3D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041E5DC 0041B3DC*/ PPC::Runtime::ASM::blr();
}