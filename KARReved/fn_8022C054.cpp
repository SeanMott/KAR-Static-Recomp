//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_initPlayerBlock?.hpp"
#include "fn_getTrialFlag.hpp"
#include "fn_8000AF38.hpp"
#include "fn_vcInitObject.hpp"
#include "fn_80192468.hpp"



void fn_8022C054(PPC::Runtime::GCContext* context)
{
/*8022C054 00228E54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x130, context->r1));
/*8022C058 00228E58*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022C05C 00228E5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*8022C060 00228E60*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x130);
/*8022C064 00228E64*/ PPC::Runtime::ASM::bl(_savegpr_18);
/*8022C068 00228E68*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022C06C 00228E6C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8022C070 00228E70*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022C074 00228E74*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8022C078 00228E78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8022C07C 00228E7C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8022C080 00228E80*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8022C084 00228E84*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x2);
/*8022C088 00228E88*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e, context->r30));
/*8022C08C 00228E8C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8022C090 00228E90*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x909, context->r30));
/*8022C094 00228E94*/ PPC::Runtime::ASM::extrwi(context->r8, context->r0, 8, 19);
/*8022C098 00228E98*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8f, context->r30));
/*8022C09C 00228E9C*/ PPC::Runtime::ASM::rlwimi(context->r9, context->r8, 7, 24, 24);
/*8022C0A0 00228EA0*/ PPC::Runtime::ASM::lwz(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8022C0A4 00228EA4*/ PPC::Runtime::ASM::extrwi(context->r8, context->r7, 1, 26);
/*8022C0A8 00228EA8*/ PPC::Runtime::ASM::lwz(context->r19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8022C0AC 00228EAC*/ PPC::Runtime::ASM::lwz(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8022C0B0 00228EB0*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r9, 24);
/*8022C0B4 00228EB4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022C0B8 00228EB8*/ PPC::Runtime::ASM::rlwimi(context->r7, context->r8, 6, 25, 25);
/*8022C0BC 00228EBC*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8022C0C0 00228EC0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8022C0C4 00228EC4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8022C0C8 00228EC8*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8022C0CC 00228ECC*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8022C0D0 00228ED0*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8022C0D4 00228ED4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8022C0D8 00228ED8*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*8022C0DC 00228EDC*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*8022C0E0 00228EE0*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*8022C0E4 00228EE4*/ PPC::Runtime::ASM::lwz(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*8022C0E8 00228EE8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*8022C0EC 00228EEC*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8022C0F0 00228EF0*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*8022C0F4 00228EF4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*8022C0F8 00228EF8*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*8022C0FC 00228EFC*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022C100 00228F00*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022C104 00228F04*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8022C108 00228F08*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022C10C 00228F0C*/ PPC::Runtime::ASM::stw(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022C110 00228F10*/ PPC::Runtime::ASM::stw(context->r19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022C114 00228F14*/ PPC::Runtime::ASM::stw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8022C118 00228F18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022C11C 00228F1C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8022C120 00228F20*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8022C124 00228F24*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8022C128 00228F28*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8022C12C 00228F2C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8022C130 00228F30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8022C134 00228F34*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8022C138 00228F38*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8022C13C 00228F3C*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8022C140 00228F40*/ PPC::Runtime::ASM::stw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8022C144 00228F44*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8022C148 00228F48*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8022C14C 00228F4C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8022C150 00228F50*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8022C154 00228F54*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8022C158 00228F58*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8022C15C 00228F5C*/ PPC::Runtime::ASM::bl(fn_initPlayerBlock?);
/*8022C160 00228F60*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022C164 00228F64*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r1));
/*8022C168 00228F68*/ PPC::Runtime::ASM::addi(context->r31, context->r4, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022C16C 00228F6C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8022C170 00228F70*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r6, 7, 24, 24);
/*8022C174 00228F74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8022C178 00228F78*/ PPC::Runtime::ASM::lbz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e, context->r31));
/*8022C17C 00228F7C*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r5, 24);
/*8022C180 00228F80*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8f, context->r31));
/*8022C184 00228F84*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8022C188 00228F88*/ PPC::Runtime::ASM::lwz(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8022C18C 00228F8C*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r6, 4, 27, 27);
/*8022C190 00228F90*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r1));
/*8022C194 00228F94*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8022C198 00228F98*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8022C19C 00228F9C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8022C1A0 00228FA0*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8022C1A4 00228FA4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8022C1A8 00228FA8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8022C1AC 00228FAC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8022C1B0 00228FB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8022C1B4 00228FB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8022C1B8 00228FB8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8022C1BC 00228FBC*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8022C1C0 00228FC0*/ PPC::Runtime::ASM::stb(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8022C1C4 00228FC4*/ PPC::Runtime::ASM::stw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8022C1C8 00228FC8*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8022C1CC 00228FCC*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8022C1D0 00228FD0*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8022C1D4 00228FD4*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8022C1D8 00228FD8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8022C1DC 00228FDC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8022C1E0 00228FE0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8022C1E4 00228FE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8022C1E8 00228FE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8022C1EC 00228FEC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r1));
/*8022C1F0 00228FF0*/ PPC::Runtime::ASM::bne(.L_8022C214);
/*8022C1F4 00228FF4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8022C1F8 00228FF8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*8022C1FC 00228FFC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*8022C200 00229000*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r1));
/*8022C204 00229004*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 24);
/*8022C208 00229008*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 5, 26, 26);
/*8022C20C 0022900C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r1));
/*8022C210 00229010*/ PPC::Runtime::ASM::b(.L_8022C278);
RUNTIME_PPC_JUMP_LABEL(.L_8022C214, 0x8022C214) //this is a jump label
/*8022C214 00229014*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r4, 24);
/*8022C218 00229018*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8022C21C 0022901C*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r6, 6, 25, 25);
/*8022C220 00229020*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*8022C224 00229024*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r1));
/*8022C228 00229028*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*8022C22C 0022902C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r1));
/*8022C230 00229030*/ PPC::Runtime::ASM::bl(fn_getTrialFlag);
/*8022C234 00229034*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8022C238 00229038*/ PPC::Runtime::ASM::bne(.L_8022C244);
/*8022C23C 0022903C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8022C240 00229040*/ PPC::Runtime::ASM::b(.L_8022C260);
RUNTIME_PPC_JUMP_LABEL(.L_8022C244, 0x8022C244) //this is a jump label
/*8022C244 00229044*/ PPC::Runtime::ASM::bl(fn_8000AF38);
/*8022C248 00229048*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8022C24C 0022904C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8022C250 00229050*/ PPC::Runtime::ASM::bne(.L_8022C25C);
/*8022C254 00229054*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8022C258 00229058*/ PPC::Runtime::ASM::b(.L_8022C260);
RUNTIME_PPC_JUMP_LABEL(.L_8022C25C, 0x8022C25C) //this is a jump label
/*8022C25C 0022905C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8022C260, 0x8022C260) //this is a jump label
/*8022C260 00229060*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8022C264 00229064*/ PPC::Runtime::ASM::beq(.L_8022C278);
/*8022C268 00229068*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r1));
/*8022C26C 0022906C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8022C270 00229070*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*8022C274 00229074*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8022C278, 0x8022C278) //this is a jump label
/*8022C278 00229078*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8022C27C 0022907C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8022C280 00229080*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8022C284 00229084*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*8022C288 00229088*/ PPC::Runtime::ASM::lwz(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*8022C28C 0022908C*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8022C290 00229090*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*8022C294 00229094*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8022C298 00229098*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8022C29C 0022909C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8022C2A0 002290A0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*8022C2A4 002290A4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*8022C2A8 002290A8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*8022C2AC 002290AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8022C2B0 002290B0*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8022C2B4 002290B4*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*8022C2B8 002290B8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*8022C2BC 002290BC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*8022C2C0 002290C0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*8022C2C4 002290C4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*8022C2C8 002290C8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*8022C2CC 002290CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*8022C2D0 002290D0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*8022C2D4 002290D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*8022C2D8 002290D8*/ PPC::Runtime::ASM::stw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8022C2DC 002290DC*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8022C2E0 002290E0*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*8022C2E4 002290E4*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*8022C2E8 002290E8*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*8022C2EC 002290EC*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*8022C2F0 002290F0*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*8022C2F4 002290F4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*8022C2F8 002290F8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*8022C2FC 002290FC*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8022C300 00229100*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8022C304 00229104*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*8022C308 00229108*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8022C30C 0022910C*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*8022C310 00229110*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1));
/*8022C314 00229114*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r1));
/*8022C318 00229118*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*8022C31C 0022911C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*8022C320 00229120*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1));
/*8022C324 00229124*/ PPC::Runtime::ASM::bl(fn_vcInitObject);
/*8022C328 00229128*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*8022C32C 0022912C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8022C330 00229130*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8022C334 00229134*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8022C338 00229138*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8022C33C 0022913C*/ PPC::Runtime::ASM::bl(fn_80192468);
/*8022C340 00229140*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x130);
/*8022C344 00229144*/ PPC::Runtime::ASM::bl(_restgpr_18);
/*8022C348 00229148*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*8022C34C 0022914C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022C350 00229150*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x130);
/*8022C354 00229154*/ PPC::Runtime::ASM::blr();
}