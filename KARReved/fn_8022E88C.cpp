//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"
#include "fn_800092D8.hpp"
#include "fn_stGetStageKind_groundId.hpp"
#include "fn_80009534.hpp"
#include "fn_80009F44.hpp"



void fn_8022E88C(PPC::Runtime::GCContext* context)
{
/*8022E88C 0022B68C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8022E890 0022B690*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022E894 0022B694*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022E898 0022B698*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022E89C 0022B69C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022E8A0 0022B6A0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8022E8A4 0022B6A4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*8022E8A8 0022B6A8*/ PPC::Runtime::ASM::beq(.L_8022E9F8);
/*8022E8AC 0022B6AC*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022E8B0 0022B6B0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x855, context->r3));
/*8022E8B4 0022B6B4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/* 8022E8B8 0022B6B8  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*8022E8BC 0022B6BC*/ PPC::Runtime::ASM::bne(.L_8022E9F8);
/*8022E8C0 0022B6C0*/ PPC::Runtime::ASM::bl(fn_800092D8);
/*8022E8C4 0022B6C4*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8022E8C8 0022B6C8*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*8022E8CC 0022B6CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x7);
/*8022E8D0 0022B6D0*/ PPC::Runtime::ASM::beq(.L_8022E900);
/*8022E8D4 0022B6D4*/ PPC::Runtime::ASM::bge(.L_8022E938);
/*8022E8D8 0022B6D8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8022E8DC 0022B6DC*/ PPC::Runtime::ASM::beq(.L_8022E8E4);
/*8022E8E0 0022B6E0*/ PPC::Runtime::ASM::b(.L_8022E938);
RUNTIME_PPC_JUMP_LABEL(.L_8022E8E4, 0x8022E8E4) //this is a jump label
/*8022E8E4 0022B6E4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r31));
/* 8022E8E8 0022B6E8  54 60 E7 FF */ extrwi. context->r0 , context->r3 , 1 , 27
/*8022E8EC 0022B6EC*/ PPC::Runtime::ASM::beq(.L_8022E938);
/*8022E8F0 0022B6F0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8022E8F4 0022B6F4*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 5, 26, 26);
/*8022E8F8 0022B6F8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r31));
/*8022E8FC 0022B6FC*/ PPC::Runtime::ASM::b(.L_8022E938);
RUNTIME_PPC_JUMP_LABEL(.L_8022E900, 0x8022E900) //this is a jump label
/*8022E900 0022B700*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r31));
/* 8022E904 0022B704  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*8022E908 0022B708*/ PPC::Runtime::ASM::bne(.L_8022E91C);
/*8022E90C 0022B70C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r31));
/*8022E910 0022B710*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8022E914 0022B714*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r31));
/*8022E918 0022B718*/ PPC::Runtime::ASM::b(.L_8022E924);
RUNTIME_PPC_JUMP_LABEL(.L_8022E91C, 0x8022E91C) //this is a jump label
/*8022E91C 0022B71C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8022E920 0022B720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8022E924, 0x8022E924) //this is a jump label
/*8022E924 0022B724*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x81c, context->r31));
/*8022E928 0022B728*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r31));
/*8022E92C 0022B72C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8022E930 0022B730*/ PPC::Runtime::ASM::bge(.L_8022E938);
/*8022E934 0022B734*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x81c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8022E938, 0x8022E938) //this is a jump label
/*8022E938 0022B738*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r31));
/*8022E93C 0022B73C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022E940 0022B740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x828, context->r31));
/*8022E944 0022B744*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8022E948 0022B748*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8022E94C 0022B74C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022E950 0022B750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r31));
/*8022E954 0022B754*/ PPC::Runtime::ASM::bl(fn_80009F44);
/*8022E958 0022B758*/ PPC::Runtime::ASM::lis(context->r4, 0x8889);
/*8022E95C 0022B75C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8022E960 0022B760*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x7777);
/*8022E964 0022B764*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/* 8022E968 0022B768  7C A5 18 96 */ mulhw context->r5 , context->r5 , context->r3
/*8022E96C 0022B76C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022E970 0022B770*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2A40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022E974 0022B774*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/*8022E978 0022B778*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E2A38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022E97C 0022B77C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2A3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022E980 0022B780*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r3);
/*8022E984 0022B784*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 5);
/*8022E988 0022B788*/ PPC::Runtime::ASM::srwi(context->r5, context->r4, 31);
/*8022E98C 0022B78C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r5);
/*8022E990 0022B790*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x3c);
/*8022E994 0022B794*/ PPC::Runtime::ASM::subf(context->r3, context->r4, context->r3);
/*8022E998 0022B798*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*8022E99C 0022B79C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022E9A0 0022B7A0*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022E9A4 0022B7A4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*8022E9A8 0022B7A8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f1);
/*8022E9AC 0022B7AC*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*8022E9B0 0022B7B0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8022E9B4 0022B7B4*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8022E9B8 0022B7B8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 8022E9BC 0022B7BC  7C 00 30 96 */ mulhw context->r0 , context->r0 , context->r6
/*8022E9C0 0022B7C0*/ PPC::Runtime::ASM::srawi(context->r4, context->r0, 2);
/*8022E9C4 0022B7C4*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8022E9C8 0022B7C8*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*8022E9CC 0022B7CC*/ PPC::Runtime::ASM::srwi(context->r5, context->r4, 31);
/*8022E9D0 0022B7D0*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8022E9D4 0022B7D4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8022E9D8 0022B7D8*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r5);
/*8022E9DC 0022B7DC*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r6);
/*8022E9E0 0022B7E0*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8022E9E4 0022B7E4*/ PPC::Runtime::ASM::bne(.L_8022E9F8);
/*8022E9E8 0022B7E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84d, context->r31));
/*8022E9EC 0022B7EC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8022E9F0 0022B7F0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*8022E9F4 0022B7F4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84d, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8022E9F8, 0x8022E9F8) //this is a jump label
/*8022E9F8 0022B7F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022E9FC 0022B7FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022EA00 0022B800*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022EA04 0022B804*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022EA08 0022B808*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8022EA0C 0022B80C*/ PPC::Runtime::ASM::blr();
}