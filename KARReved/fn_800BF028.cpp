//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006DE8C.hpp"
#include "fn_8006E03C.hpp"
#include "fn_800BE940.hpp"
#include "fn_800BB04C.hpp"



void fn_800BF028(PPC::Runtime::GCContext* context)
{
/*800BF028 000BBE28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*800BF02C 000BBE2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800BF030 000BBE30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800BF034 000BBE34*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800BF038 000BBE38*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800BF03C 000BBE3C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800BF040 000BBE40*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*800BF044 000BBE44*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800BF048 000BBE48*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800BF04C 000BBE4C*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BF050 000BBE50*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800BF054 000BBE54*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800BF058 000BBE58*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*800BF05C 000BBE5C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800BF060 000BBE60*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF064 000BBE64*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
/*800BF068 000BBE68*/ PPC::Runtime::ASM::fmr(context->f28, context->f1);
/*800BF06C 000BBE6C*/ PPC::Runtime::ASM::fmr(context->f29, context->f2);
/*800BF070 000BBE70*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800BF074 000BBE74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BF078 000BBE78*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*800BF07C 000BBE7C*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*800BF080 000BBE80*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*800BF084 000BBE84*/ PPC::Runtime::ASM::beq(.L_800BF098);
/*800BF088 000BBE88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r27));
/*800BF08C 000BBE8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x210, context->r27));
/*800BF090 000BBE90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800BF094 000BBE94*/ PPC::Runtime::ASM::b(.L_800BF3BC);
RUNTIME_PPC_JUMP_LABEL(.L_800BF098, 0x800BF098) //this is a jump label
/*800BF098 000BBE98*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
/*800BF09C 000BBE9C*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0xb8);
/*800BF0A0 000BBEA0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800BF0A4 000BBEA4*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BF0A8 000BBEA8*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*800BF0AC 000BBEAC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BF0B0 000BBEB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF0B4 000BBEB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800BF0B8 000BBEB8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*800BF0BC 000BBEBC*/ PPC::Runtime::ASM::bge(.L_800BF0E0);
/*800BF0C0 000BBEC0*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0xc4);
/*800BF0C4 000BBEC4*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800BF0C8 000BBEC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF0CC 000BBECC*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*800BF0D0 000BBED0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800BF0D4 000BBED4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*800BF0D8 000BBED8*/ PPC::Runtime::ASM::bge(.L_800BF0E0);
/*800BF0DC 000BBEDC*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800BF0E0, 0x800BF0E0) //this is a jump label
/*800BF0E0 000BBEE0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF0E4 000BBEE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*800BF0E8 000BBEE8*/ PPC::Runtime::ASM::ble(.L_800BF1A8);
/*800BF0EC 000BBEEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF0F0 000BBEF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x238, context->r3));
/*800BF0F4 000BBEF4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*800BF0F8 000BBEF8*/ PPC::Runtime::ASM::bge(.L_800BF110);
/*800BF0FC 000BBEFC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800BF100 000BBF00*/ PPC::Runtime::ASM::fsubs(context->f1, context->f30, context->f2);
/*800BF104 000BBF04*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*800BF108 000BBF08*/ PPC::Runtime::ASM::fdivs(context->f4, context->f1, context->f0);
/*800BF10C 000BBF0C*/ PPC::Runtime::ASM::b(.L_800BF114);
RUNTIME_PPC_JUMP_LABEL(.L_800BF110, 0x800BF110) //this is a jump label
/*800BF110 000BBF10*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805DF2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800BF114, 0x800BF114) //this is a jump label
/*800BF114 000BBF14*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23c, context->r3));
/*800BF118 000BBF18*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r3));
/*800BF11C 000BBF1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x210, context->r27));
/*800BF120 000BBF20*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f3);
/*800BF124 000BBF24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF128 000BBF28*/ PPC::Runtime::ASM::fmadds(context->f30, context->f4, context->f2, context->f3);
/*800BF12C 000BBF2C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f30);
/*800BF130 000BBF30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x210, context->r27));
/*800BF134 000BBF34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF138 000BBF38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r27));
/*800BF13C 000BBF3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r3));
/*800BF140 000BBF40*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800BF144 000BBF44*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*800BF148 000BBF48*/ PPC::Runtime::ASM::fmuls(context->f31, context->f0, context->f4);
/*800BF14C 000BBF4C*/ PPC::Runtime::ASM::bne(.L_800BF1A0);
/*800BF150 000BBF50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF154 000BBF54*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800BF158 000BBF58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r27));
/*800BF15C 000BBF5C*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*800BF160 000BBF60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*800BF164 000BBF64*/ PPC::Runtime::ASM::bl(fn_8006DE8C);
/*800BF168 000BBF68*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r27));
/*800BF16C 000BBF6C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800BF170 000BBF70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r27));
/*800BF174 000BBF74*/ PPC::Runtime::ASM::bl(fn_8006E03C);
/*800BF178 000BBF78*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800BF17C 000BBF7C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF180 000BBF80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c0, context->r27));
/*800BF184 000BBF84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF188 000BBF88*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x278, context->r3));
/*800BF18C 000BBF8C*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*800BF190 000BBF90*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BF194 000BBF94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BF198 000BBF98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r27));
/*800BF19C 000BBF9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2bc, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_800BF1A0, 0x800BF1A0) //this is a jump label
/*800BF1A0 000BBFA0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800BF1A4 000BBFA4*/ PPC::Runtime::ASM::b(.L_800BF2A8);
RUNTIME_PPC_JUMP_LABEL(.L_800BF1A8, 0x800BF1A8) //this is a jump label
/*800BF1A8 000BBFA8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r26));
/* 800BF1AC 000BBFAC  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*800BF1B0 000BBFB0*/ PPC::Runtime::ASM::beq(.L_800BF25C);
/*800BF1B4 000BBFB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF1B8 000BBFB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x254, context->r3));
/*800BF1BC 000BBFBC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f28, context->f0);
/*800BF1C0 000BBFC0*/ PPC::Runtime::ASM::ble(.L_800BF25C);
/*800BF1C4 000BBFC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r27));
/*800BF1C8 000BBFC8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x258, context->r3));
/*800BF1CC 000BBFCC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f28);
/*800BF1D0 000BBFD0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f2);
/*800BF1D4 000BBFD4*/ PPC::Runtime::ASM::ble(.L_800BF2A8);
/*800BF1D8 000BBFD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25c, context->r3));
/*800BF1DC 000BBFDC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BF1E0 000BBFE0*/ PPC::Runtime::ASM::ble(.L_800BF1EC);
/*800BF1E4 000BBFE4*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805DF2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF1E8 000BBFE8*/ PPC::Runtime::ASM::b(.L_800BF208);
RUNTIME_PPC_JUMP_LABEL(.L_800BF1EC, 0x800BF1EC) //this is a jump label
/*800BF1EC 000BBFEC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f2);
/*800BF1F0 000BBFF0*/ PPC::Runtime::ASM::bge(.L_800BF1FC);
/*800BF1F4 000BBFF4*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF1F8 000BBFF8*/ PPC::Runtime::ASM::b(.L_800BF208);
RUNTIME_PPC_JUMP_LABEL(.L_800BF1FC, 0x800BF1FC) //this is a jump label
/*800BF1FC 000BBFFC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800BF200 000BC000*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*800BF204 000BC004*/ PPC::Runtime::ASM::fdivs(context->f6, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800BF208, 0x800BF208) //this is a jump label
/*800BF208 000BC008*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF20C 000BC00C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805DF2F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF210 000BC010*/ PPC::Runtime::ASM::fdivs(context->f0, context->f29, context->f0);
/*800BF214 000BC014*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x260, context->r3));
/*800BF218 000BC018*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF21C 000BC01C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x264, context->r3));
/*800BF220 000BC020*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF224 000BC024*/ PPC::Runtime::ASM::fmuls(context->f3, context->f4, context->f3);
/*800BF228 000BC028*/ PPC::Runtime::ASM::fsubs(context->f7, context->f1, context->f0);
/*800BF22C 000BC02C*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f4, context->f2, context->f3);
/*800BF230 000BC030*/ PPC::Runtime::ASM::fcmpo(cr0, context->f7, context->f5);
/*800BF234 000BC034*/ PPC::Runtime::ASM::fmadds(context->f31, context->f6, context->f0, context->f3);
/*800BF238 000BC038*/ PPC::Runtime::ASM::bge(.L_800BF240);
/*800BF23C 000BC03C*/ PPC::Runtime::ASM::b(.L_800BF254);
RUNTIME_PPC_JUMP_LABEL(.L_800BF240, 0x800BF240) //this is a jump label
/*800BF240 000BC040*/ PPC::Runtime::ASM::fcmpo(cr0, context->f7, context->f1);
/*800BF244 000BC044*/ PPC::Runtime::ASM::ble(.L_800BF250);
/*800BF248 000BC048*/ PPC::Runtime::ASM::fmr(context->f5, context->f1);
/*800BF24C 000BC04C*/ PPC::Runtime::ASM::b(.L_800BF254);
RUNTIME_PPC_JUMP_LABEL(.L_800BF250, 0x800BF250) //this is a jump label
/*800BF250 000BC050*/ PPC::Runtime::ASM::fmr(context->f5, context->f7);
RUNTIME_PPC_JUMP_LABEL(.L_800BF254, 0x800BF254) //this is a jump label
/*800BF254 000BC054*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f5);
/*800BF258 000BC058*/ PPC::Runtime::ASM::b(.L_800BF2A8);
RUNTIME_PPC_JUMP_LABEL(.L_800BF25C, 0x800BF25C) //this is a jump label
/*800BF25C 000BC05C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r27));
/*800BF260 000BC060*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800BF264 000BC064*/ PPC::Runtime::ASM::beq(.L_800BF2A8);
/*800BF268 000BC068*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c0, context->r27));
/*800BF26C 000BC06C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*800BF270 000BC070*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF274 000BC074*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*800BF278 000BC078*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BF27C 000BC07C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DF348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF280 000BC080*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BF284 000BC084*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r3));
/*800BF288 000BC088*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BF28C 000BC08C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*800BF290 000BC090*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*800BF294 000BC094*/ PPC::Runtime::ASM::bge(.L_800BF2A8);
/*800BF298 000BC098*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f2);
/*800BF29C 000BC09C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BF2A0 000BC0A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BF2A4 000BC0A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c0, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_800BF2A8, 0x800BF2A8) //this is a jump label
/*800BF2A8 000BC0A8*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*800BF2AC 000BC0AC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800BF2B0 000BC0B0*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800BF2B4 000BC0B4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800BF2B8 000BC0B8*/ PPC::Runtime::ASM::bl(fn_800BE940);
/*800BF2BC 000BC0BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r27));
/*800BF2C0 000BC0C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF2C4 000BC0C4*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*800BF2C8 000BC0C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x210, context->r27));
/*800BF2CC 000BC0CC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r3));
/*800BF2D0 000BC0D0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r3));
/*800BF2D4 000BC0D4*/ PPC::Runtime::ASM::bl(fn_800BB04C);
/*800BF2D8 000BC0D8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x210, context->r27));
/*800BF2DC 000BC0DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r27));
/*800BF2E0 000BC0E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x210, context->r27));
/*800BF2E4 000BC0E4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800BF2E8 000BC0E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r27));
/*800BF2EC 000BC0EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF2F0 000BC0F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r27));
/*800BF2F4 000BC0F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22c, context->r3));
/*800BF2F8 000BC0F8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*800BF2FC 000BC0FC*/ PPC::Runtime::ASM::ble(.L_800BF304);
/*800BF300 000BC100*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_800BF304, 0x800BF304) //this is a jump label
/*800BF304 000BC104*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800BF308 000BC108*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF30C 000BC10C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f31, context->f1);
/*800BF310 000BC110*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800BF314 000BC114*/ PPC::Runtime::ASM::ble(.L_800BF320);
/*800BF318 000BC118*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800BF31C 000BC11C*/ PPC::Runtime::ASM::bgt(.L_800BF334);
RUNTIME_PPC_JUMP_LABEL(.L_800BF320, 0x800BF320) //this is a jump label
/*800BF320 000BC120*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF324 000BC124*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800BF328 000BC128*/ PPC::Runtime::ASM::bge(.L_800BF348);
/*800BF32C 000BC12C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800BF330 000BC130*/ PPC::Runtime::ASM::bge(.L_800BF348);
RUNTIME_PPC_JUMP_LABEL(.L_800BF334, 0x800BF334) //this is a jump label
/*800BF334 000BC134*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF338 000BC138*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF33C 000BC13C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r3));
/*800BF340 000BC140*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*800BF344 000BC144*/ PPC::Runtime::ASM::b(.L_800BF358);
RUNTIME_PPC_JUMP_LABEL(.L_800BF348, 0x800BF348) //this is a jump label
/*800BF348 000BC148*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF34C 000BC14C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF350 000BC150*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x250, context->r3));
/*800BF354 000BC154*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800BF358, 0x800BF358) //this is a jump label
/*800BF358 000BC158*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*800BF35C 000BC15C*/ PPC::Runtime::ASM::ble(.L_800BF370);
/*800BF360 000BC160*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800BF364 000BC164*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*800BF368 000BC168*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800BF36C 000BC16C*/ PPC::Runtime::ASM::b(.L_800BF390);
RUNTIME_PPC_JUMP_LABEL(.L_800BF370, 0x800BF370) //this is a jump label
/*800BF370 000BC170*/ PPC::Runtime::ASM::fneg(context->f0, context->f1);
/*800BF374 000BC174*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800BF378 000BC178*/ PPC::Runtime::ASM::bge(.L_800BF38C);
/*800BF37C 000BC17C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800BF380 000BC180*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*800BF384 000BC184*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800BF388 000BC188*/ PPC::Runtime::ASM::b(.L_800BF390);
RUNTIME_PPC_JUMP_LABEL(.L_800BF38C, 0x800BF38C) //this is a jump label
/*800BF38C 000BC18C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_800BF390, 0x800BF390) //this is a jump label
/*800BF390 000BC190*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF394 000BC194*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r27));
/*800BF398 000BC198*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r3));
/*800BF39C 000BC19C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*800BF3A0 000BC1A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800BF3A4 000BC1A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF3A8 000BC1A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800BF3AC 000BC1AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26c, context->r3));
/*800BF3B0 000BC1B0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*800BF3B4 000BC1B4*/ PPC::Runtime::ASM::ble(.L_800BF3BC);
/*800BF3B8 000BC1B8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800BF3BC, 0x800BF3BC) //this is a jump label
/*800BF3BC 000BC1BC*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BF3C0 000BC1C0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r27));
/*800BF3C4 000BC1C4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BF3C8 000BC1C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BF3CC 000BC1CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800BF3D0 000BC1D0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r27));
/*800BF3D4 000BC1D4*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
/*800BF3D8 000BC1D8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*800BF3DC 000BC1DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r3));
/*800BF3E0 000BC1E0*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f5);
/*800BF3E4 000BC1E4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*800BF3E8 000BC1E8*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f5);
/*800BF3EC 000BC1EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r27));
/*800BF3F0 000BC1F0*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f2);
/*800BF3F4 000BC1F4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800BF3F8 000BC1F8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800BF3FC 000BC1FC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*800BF400 000BC200*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800BF404 000BC204*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800BF408 000BC208*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800BF40C 000BC20C*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800BF410 000BC210*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800BF414 000BC214*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BF418 000BC218*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*800BF41C 000BC21C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800BF420 000BC220*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800BF424 000BC224*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*800BF428 000BC228*/ PPC::Runtime::ASM::blr();
}