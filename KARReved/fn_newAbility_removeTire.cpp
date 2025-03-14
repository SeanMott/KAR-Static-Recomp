//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_revertKirbyModel?.hpp"
#include "fn_hwOff.hpp"
#include "fn_ability_bird_removeStar.hpp"
#include "fn_801C85A8.hpp"
#include "fn_801DED8C.hpp"



void fn_newAbility_removeTire(PPC::Runtime::GCContext* context)
{
/*801AF8AC 001AC6AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AF8B0 001AC6B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AF8B4 001AC6B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801AF8B8 001AC6B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF8BC 001AC6BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AF8C0 001AC6C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AF8C4 001AC6C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x821, context->r3));
/*801AF8C8 001AC6C8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*801AF8CC 001AC6CC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x821, context->r3));
/*801AF8D0 001AC6D0*/ PPC::Runtime::ASM::bl(fn_revertKirbyModel?);
/*801AF8D4 001AC6D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*801AF8D8 001AC6D8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*801AF8DC 001AC6DC*/ PPC::Runtime::ASM::bl(fn_hwOff);
/*801AF8E0 001AC6E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*801AF8E4 001AC6E4*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r4));
/*801AF8E8 001AC6E8*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 8, 22);
/*801AF8EC 001AC6EC*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 29, 27);
/*801AF8F0 001AC6F0*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 2, 22, 29);
/*801AF8F4 001AC6F4*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r4));
/*801AF8F8 001AC6F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r31));
/* 801AF8FC 001AC6FC  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801AF900 001AC700*/ PPC::Runtime::ASM::bne(.L_801AF920);
/*801AF904 001AC704*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801AF908 001AC708*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AF90C 001AC70C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801AF910 001AC710*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801AF914 001AC714*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801AF918 001AC718*/ PPC::Runtime::ASM::bl(fn_ability_bird_removeStar);
/*801AF91C 001AC71C*/ PPC::Runtime::ASM::b(.L_801AF93C);
RUNTIME_PPC_JUMP_LABEL(.L_801AF920, 0x801AF920) //this is a jump label
/*801AF920 001AC720*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801AF924 001AC724*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801AF928 001AC728*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*801AF92C 001AC72C*/ PPC::Runtime::ASM::bl(fn_801C85A8);
/*801AF930 001AC730*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f8, context->r31));
/*801AF934 001AC734*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9fc, context->r31));
/*801AF938 001AC738*/ PPC::Runtime::ASM::bl(fn_801DED8C);
RUNTIME_PPC_JUMP_LABEL(.L_801AF93C, 0x801AF93C) //this is a jump label
/*801AF93C 001AC73C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF940 001AC740*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AF944 001AC744*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AF948 001AC748*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AF94C 001AC74C*/ PPC::Runtime::ASM::blr();
}