//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_spawnSensorBomb.hpp"
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801B6A44.hpp"



void fn_801B68B8(PPC::Runtime::GCContext* context)
{
/*801B68B8 001B36B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B68BC 001B36BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B68C0 001B36C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B68C4 001B36C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B68C8 001B36C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B68CC 001B36CC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r3));
/* 801B68D0 001B36D0  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*801B68D4 001B36D4*/ PPC::Runtime::ASM::beq(.L_801B68EC);
/*801B68D8 001B36D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801B68DC 001B36DC*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 7, 24, 24);
/*801B68E0 001B36E0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r31));
/*801B68E4 001B36E4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801B68E8 001B36E8*/ PPC::Runtime::ASM::b(.L_801B68F0);
RUNTIME_PPC_JUMP_LABEL(.L_801B68EC, 0x801B68EC) //this is a jump label
/*801B68EC 001B36EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801B68F0, 0x801B68F0) //this is a jump label
/*801B68F0 001B36F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801B68F4 001B36F4*/ PPC::Runtime::ASM::beq(.L_801B6904);
/*801B68F8 001B36F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B68FC 001B36FC*/ PPC::Runtime::ASM::bl(fn_spawnSensorBomb);
/*801B6900 001B3700*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801B6904, 0x801B6904) //this is a jump label
/*801B6904 001B3704*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B6908 001B3708*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801B690C 001B370C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B6910 001B3710*/ PPC::Runtime::ASM::beq(.L_801B691C);
/*801B6914 001B3714*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B6918 001B3718*/ PPC::Runtime::ASM::bl(fn_801B6A44);
RUNTIME_PPC_JUMP_LABEL(.L_801B691C, 0x801B691C) //this is a jump label
/*801B691C 001B371C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6920 001B3720*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B6924 001B3724*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6928 001B3728*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B692C 001B372C*/ PPC::Runtime::ASM::blr();
}