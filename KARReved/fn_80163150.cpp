//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8013E274.hpp"



void fn_80163150(PPC::Runtime::GCContext* context)
{
/*80163150 0015FF50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80163154 0015FF54*/ PPC::Runtime::ASM::mflr(context->r0);
/*80163158 0015FF58*/ PPC::Runtime::ASM::lis(context->r4, StructValues_92_6_To_1D @ Get_MemoryOffset_HighBit);
/*8016315C 0015FF5C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80163160 0015FF60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80163164 0015FF64*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80163168 0015FF68*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8016316C 0015FF6C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, StructValues_92_6_To_1D @ Get_MemoryOffset_LowBit);
/*80163170 0015FF70*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80163174 0015FF74*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80163178, 0x80163178) //this is a jump label
/*80163178 0015FF78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016317C 0015FF7C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80163180 0015FF80*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80163184 0015FF84*/ PPC::Runtime::ASM::bne(.L_80163190);
/*80163188 0015FF88*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8016318C 0015FF8C*/ PPC::Runtime::ASM::b(.L_8016319C);
RUNTIME_PPC_JUMP_LABEL(.L_80163190, 0x80163190) //this is a jump label
/*80163190 0015FF90*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80163194 0015FF94*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80163198 0015FF98*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_8016319C, 0x8016319C) //this is a jump label
/*8016319C 0015FF9C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*801631A0 0015FFA0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801631A4 0015FFA4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801631A8 0015FFA8*/ PPC::Runtime::ASM::bne(.L_801631B4);
/*801631AC 0015FFAC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*801631B0 0015FFB0*/ PPC::Runtime::ASM::b(.L_801631C0);
RUNTIME_PPC_JUMP_LABEL(.L_801631B4, 0x801631B4) //this is a jump label
/*801631B4 0015FFB4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801631B8 0015FFB8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*801631BC 0015FFBC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_801631C0, 0x801631C0) //this is a jump label
/*801631C0 0015FFC0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*801631C4 0015FFC4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801631C8 0015FFC8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801631CC 0015FFCC*/ PPC::Runtime::ASM::bne(.L_801631D8);
/*801631D0 0015FFD0*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r6));
/*801631D4 0015FFD4*/ PPC::Runtime::ASM::b(.L_801631E4);
RUNTIME_PPC_JUMP_LABEL(.L_801631D8, 0x801631D8) //this is a jump label
/*801631D8 0015FFD8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801631DC 0015FFDC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*801631E0 0015FFE0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_801631E4, 0x801631E4) //this is a jump label
/*801631E4 0015FFE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*801631E8 0015FFE8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801631EC 0015FFEC*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801631F0 0015FFF0*/ PPC::Runtime::ASM::bne(.L_801631FC);
/*801631F4 0015FFF4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r6));
/*801631F8 0015FFF8*/ PPC::Runtime::ASM::b(.L_80163208);
RUNTIME_PPC_JUMP_LABEL(.L_801631FC, 0x801631FC) //this is a jump label
/*801631FC 0015FFFC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80163200 00160000*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80163204 00160004*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_80163208, 0x80163208) //this is a jump label
/*80163208 00160008*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*8016320C 0016000C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x3);
/*80163210 00160010*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*80163214 00160014*/ PPC::Runtime::ASM::bdnz(.L_80163178);
/*80163218 00160018*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8016321C 0016001C*/ PPC::Runtime::ASM::bl(fn_8013E274);
/*80163220 00160020*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80163224 00160024*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80163228 00160028*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016322C 0016002C*/ PPC::Runtime::ASM::blr();
}