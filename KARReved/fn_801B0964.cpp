//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801AFBB0.hpp"
#include "fn_801AFBB0.hpp"
#include "fn_801A889C.hpp"
#include "fn_801A8454.hpp"



void fn_801B0964(PPC::Runtime::GCContext* context)
{
/*801B0964 001AD764*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B0968 001AD768*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B096C 001AD76C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0970 001AD770*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B0974 001AD774*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B0978 001AD778*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x808, context->r3));
/*801B097C 001AD77C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801B0980 001AD780*/ PPC::Runtime::ASM::beq(.L_801B0998);
/*801B0984 001AD784*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B0988 001AD788*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801B098C 001AD78C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801B0990 001AD790*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B0994 001AD794*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x808, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801B0998, 0x801B0998) //this is a jump label
/*801B0998 001AD798*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B099C 001AD79C*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801B09A0 001AD7A0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B09A4 001AD7A4*/ PPC::Runtime::ASM::beq(.L_801B09E8);
/*801B09A8 001AD7A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B09AC 001AD7AC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801B09B0 001AD7B0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801B09B4 001AD7B4*/ PPC::Runtime::ASM::lis(context->r3, fn_801AFBB0 @ Get_MemoryOffset_HighBit);
/*801B09B8 001AD7B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B09BC 001AD7BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801AFBB0 @ Get_MemoryOffset_LowBit);
/*801B09C0 001AD7C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B09C4 001AD7C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x938, context->r31));
/*801B09C8 001AD7C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B09CC 001AD7CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r4));
/*801B09D0 001AD7D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B09D4 001AD7D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B09D8 001AD7D8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1bc);
/*801B09DC 001AD7DC*/ PPC::Runtime::ASM::bl(fn_801A889C);
/*801B09E0 001AD7E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B09E4 001AD7E4*/ PPC::Runtime::ASM::bl(fn_801A8454);
RUNTIME_PPC_JUMP_LABEL(.L_801B09E8, 0x801B09E8) //this is a jump label
/*801B09E8 001AD7E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B09EC 001AD7EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B09F0 001AD7F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B09F4 001AD7F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B09F8 001AD7F8*/ PPC::Runtime::ASM::blr();
}