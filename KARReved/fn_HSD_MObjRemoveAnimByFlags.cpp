//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_AObjRemove.hpp"
#include "fn_HSD_TObjRemoveAnimAll.hpp"



void fn_HSD_MObjRemoveAnimByFlags(PPC::Runtime::GCContext* context)
{
/*803F98F4 003F66F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F98F8 003F66F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F98FC 003F66FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F9900 003F6700*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F9904 003F6704*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803F9908 003F6708*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 803F990C 003F670C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*803F9910 003F6710*/ PPC::Runtime::ASM::beq(.L_803F993C);
/*803F9914 003F6714*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 29, 29);
/*803F9918 003F6718*/ PPC::Runtime::ASM::beq(.L_803F992C);
/*803F991C 003F671C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*803F9920 003F6720*/ PPC::Runtime::ASM::bl(fn_HSD_AObjRemove);
/*803F9924 003F6724*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803F9928 003F6728*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803F992C, 0x803F992C) //this is a jump label
/*803F992C 003F672C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 27, 27);
/*803F9930 003F6730*/ PPC::Runtime::ASM::beq(.L_803F993C);
/*803F9934 003F6734*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803F9938 003F6738*/ PPC::Runtime::ASM::bl(fn_HSD_TObjRemoveAnimAll);
RUNTIME_PPC_JUMP_LABEL(.L_803F993C, 0x803F993C) //this is a jump label
/*803F993C 003F673C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F9940 003F6740*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F9944 003F6744*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803F9948 003F6748*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F994C 003F674C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F9950 003F6750*/ PPC::Runtime::ASM::blr();
}