//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80386C5C.hpp"
#include "fn_80389960.hpp"
#include "fn_8038CB28.hpp"
#include "fn_80389218.hpp"
#include "fn_8038CB78.hpp"



void fn_803890C0(PPC::Runtime::GCContext* context)
{
/*803890C0 00385EC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803890C4 00385EC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803890C8 00385EC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803890CC 00385ECC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803890D0 00385ED0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803890D4 00385ED4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803890D8 00385ED8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803890DC 00385EDC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803890E0 00385EE0*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*803890E4 00385EE4*/ PPC::Runtime::ASM::bl(fn_80386C5C);
/*803890E8 00385EE8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E0AA8 @ Get_MemoryOffset_HighBit);
/*803890EC 00385EEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*803890F0 00385EF0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E0AA8 @ Get_MemoryOffset_LowBit);
/*803890F4 00385EF4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803890F8 00385EF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803890FC 00385EFC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80389100 00385F00*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80389104 00385F04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80389108 00385F08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8038910C 00385F0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80389110 00385F10*/ PPC::Runtime::ASM::beq(.L_803891F4);
/*80389114 00385F14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80389118 00385F18*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8038911C 00385F1C*/ PPC::Runtime::ASM::beq(.L_803891F4);
/*80389120 00385F20*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*80389124 00385F24*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80389128 00385F28*/ PPC::Runtime::ASM::b(.L_80389134);
RUNTIME_PPC_JUMP_LABEL(.L_8038912C, 0x8038912C) //this is a jump label
/*8038912C 00385F2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80389130 00385F30*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80389134, 0x80389134) //this is a jump label
/*80389134 00385F34*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80389138 00385F38*/ PPC::Runtime::ASM::bne(.L_8038912C);
/*8038913C 00385F3C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc);
/*80389140 00385F40*/ PPC::Runtime::ASM::bl(fn_80389960);
/*80389144 00385F44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80389148 00385F48*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8038914C 00385F4C*/ PPC::Runtime::ASM::b(.L_803891EC);
RUNTIME_PPC_JUMP_LABEL(.L_80389150, 0x80389150) //this is a jump label
/*80389150 00385F50*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDCA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80389154 00385F54*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80389158 00385F58*/ PPC::Runtime::ASM::li(context->r3, 0x9c);
/*8038915C 00385F5C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r5));
/*80389160 00385F60*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80389164 00385F64*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r5));
/*80389168 00385F68*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8038916C 00385F6C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80389170 00385F70*/ PPC::Runtime::ASM::beq(.L_803891AC);
/*80389174 00385F74*/ PPC::Runtime::ASM::addi(context->r29, context->r28, 0x74);
/*80389178 00385F78*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x34);
/*8038917C 00385F7C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80389180 00385F80*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80389184 00385F84*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*80389188 00385F88*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8038918C 00385F8C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x64);
/*80389190 00385F90*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*80389194 00385F94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80389198 00385F98*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4);
/*8038919C 00385F9C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*803891A0 00385FA0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95, context->r30));
/*803891A4 00385FA4*/ PPC::Runtime::ASM::bl(fn_PSMTXIdentity);
/*803891A8 00385FA8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803891AC, 0x803891AC) //this is a jump label
/*803891AC 00385FAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803891B0 00385FB0*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*803891B4 00385FB4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDCA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803891B8 00385FB8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc);
/*803891BC 00385FBC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803891C0 00385FC0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r4));
/*803891C4 00385FC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*803891C8 00385FC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803891CC 00385FCC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x9c);
/*803891D0 00385FD0*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*803891D4 00385FD4*/ PPC::Runtime::ASM::bl(fn_80389218);
/*803891D8 00385FD8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803891DC 00385FDC*/ PPC::Runtime::ASM::beq(.L_803891E8);
/*803891E0 00385FE0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803891E4 00385FE4*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803891E8, 0x803891E8) //this is a jump label
/*803891E8 00385FE8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_803891EC, 0x803891EC) //this is a jump label
/*803891EC 00385FEC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*803891F0 00385FF0*/ PPC::Runtime::ASM::bne(.L_80389150);
RUNTIME_PPC_JUMP_LABEL(.L_803891F4, 0x803891F4) //this is a jump label
/*803891F4 00385FF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803891F8 00385FF8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803891FC 00385FFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80389200 00386000*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80389204 00386004*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80389208 00386008*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038920C 0038600C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80389210 00386010*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80389214 00386014*/ PPC::Runtime::ASM::blr();
}