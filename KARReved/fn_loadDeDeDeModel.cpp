//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_SetModelVisibility.hpp"
#include "fn_Rider_SetModelVisibility.hpp"
#include "fn_Rider_SetModelVisibility.hpp"
#include "fn_80198D1C.hpp"
#include "fn_80198D1C.hpp"
#include "fn_80198D1C.hpp"



void fn_loadDeDeDeModel(PPC::Runtime::GCContext* context)
{
/*801BDC4C 001BAA4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BDC50 001BAA50*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BDC54 001BAA54*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801BDC58 001BAA58*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801BDC5C 001BAA5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BDC60 001BAA60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BDC64 001BAA64*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BDC68 001BAA68*/ PPC::Runtime::ASM::bl(fn_Rider_SetModelVisibility);
/*801BDC6C 001BAA6C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BDC70 001BAA70*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801BDC74 001BAA74*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801BDC78 001BAA78*/ PPC::Runtime::ASM::bl(fn_Rider_SetModelVisibility);
/*801BDC7C 001BAA7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BDC80 001BAA80*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801BDC84 001BAA84*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801BDC88 001BAA88*/ PPC::Runtime::ASM::bl(fn_Rider_SetModelVisibility);
/*801BDC8C 001BAA8C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*801BDC90 001BAA90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BDC94 001BAA94*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801BDC98 001BAA98*/ PPC::Runtime::ASM::bl(fn_80198D1C);
/*801BDC9C 001BAA9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BDCA0 001BAAA0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801BDCA4 001BAAA4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801BDCA8 001BAAA8*/ PPC::Runtime::ASM::bl(fn_80198D1C);
/*801BDCAC 001BAAAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BDCB0 001BAAB0*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801BDCB4 001BAAB4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801BDCB8 001BAAB8*/ PPC::Runtime::ASM::bl(fn_80198D1C);
/*801BDCBC 001BAABC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801BDCC0 001BAAC0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801BDCC4 001BAAC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8f4, context->r31));
/*801BDCC8 001BAAC8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*801BDCCC 001BAACC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90c, context->r31));
/*801BDCD0 001BAAD0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x910, context->r31));
/*801BDCD4 001BAAD4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x914, context->r31));
/*801BDCD8 001BAAD8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x825, context->r31));
/*801BDCDC 001BAADC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*801BDCE0 001BAAE0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x825, context->r31));
/*801BDCE4 001BAAE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x825, context->r31));
/*801BDCE8 001BAAE8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 29, 29);
/*801BDCEC 001BAAEC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x825, context->r31));
/*801BDCF0 001BAAF0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x825, context->r31));
/*801BDCF4 001BAAF4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801BDCF8 001BAAF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x825, context->r31));
/*801BDCFC 001BAAFC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x928, context->r31));
/*801BDD00 001BAB00*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*801BDD04 001BAB04*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x928, context->r31));
/*801BDD08 001BAB08*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r31));
/* 801BDD0C 001BAB0C  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801BDD10 001BAB10*/ PPC::Runtime::ASM::beq(.L_801BDD20);
/*801BDD14 001BAB14*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*801BDD18 001BAB18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x920, context->r31));
/*801BDD1C 001BAB1C*/ PPC::Runtime::ASM::b(.L_801BDD24);
RUNTIME_PPC_JUMP_LABEL(.L_801BDD20, 0x801BDD20) //this is a jump label
/*801BDD20 001BAB20*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x920, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801BDD24, 0x801BDD24) //this is a jump label
/*801BDD24 001BAB24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BDD28 001BAB28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BDD2C 001BAB2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BDD30 001BAB30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BDD34 001BAB34*/ PPC::Runtime::ASM::blr();
}