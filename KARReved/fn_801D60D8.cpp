//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D6318.hpp"
#include "fn_801D5B84.hpp"
#include "fn_801D5B84.hpp"
#include "fn_801D5BBC.hpp"
#include "fn_801D5BBC.hpp"
#include "fn_8006A250.hpp"
#include "fn_8006A3F0.hpp"
#include "fn_801D6668.hpp"
#include "fn_801CB0C0.hpp"
#include "fn_8006A3F0.hpp"
#include "fn_801E1EC4.hpp"
#include "fn_8006A3F0.hpp"
#include "fn_8006A3F0.hpp"
#include "fn_8018CD70.hpp"
#include "fn_8006A3F0.hpp"
#include "fn_8018CD70.hpp"
#include "fn_8006A3F0.hpp"
#include "fn_80069F74.hpp"
#include "fn_801D6318.hpp"
#include "fn_801D5B84.hpp"
#include "fn_801D5B84.hpp"
#include "fn_801D5BBC.hpp"
#include "fn_801D5BBC.hpp"
#include "fn_8006A250.hpp"
#include "fn_80069F74.hpp"
#include "fn_801D6318.hpp"
#include "fn_801D5B84.hpp"
#include "fn_801D5B84.hpp"
#include "fn_801D5BBC.hpp"
#include "fn_801D5BBC.hpp"
#include "fn_8006A250.hpp"
#include "fn_80069F74.hpp"



void fn_801D60D8(PPC::Runtime::GCContext* context)
{
/*801D60D8 001D2ED8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801D60DC 001D2EDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D60E0 001D2EE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801D60E4 001D2EE4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D60E8 001D2EE8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801D60EC 001D2EEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D60F0 001D2EF0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D60F4 001D2EF4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D60F8 001D2EF8*/ PPC::Runtime::ASM::bl(fn_801D6318);
/*801D60FC 001D2EFC*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0xc8);
/*801D6100 001D2F00*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*801D6104 001D2F04*/ PPC::Runtime::ASM::bne(.L_801D6114);
/*801D6108 001D2F08*/ PPC::Runtime::ASM::lis(context->r3, fn_801D5B84 @ Get_MemoryOffset_HighBit);
/*801D610C 001D2F0C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, fn_801D5B84 @ Get_MemoryOffset_LowBit);
/*801D6110 001D2F10*/ PPC::Runtime::ASM::b(.L_801D611C);
RUNTIME_PPC_JUMP_LABEL(.L_801D6114, 0x801D6114) //this is a jump label
/*801D6114 001D2F14*/ PPC::Runtime::ASM::lis(context->r3, fn_801D5BBC @ Get_MemoryOffset_HighBit);
/*801D6118 001D2F18*/ PPC::Runtime::ASM::addi(context->r30, context->r3, fn_801D5BBC @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_801D611C, 0x801D611C) //this is a jump label
/*801D611C 001D2F1C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E1B80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D6120 001D2F20*/ PPC::Runtime::ASM::b(.L_801D6248);
RUNTIME_PPC_JUMP_LABEL(.L_801D6124, 0x801D6124) //this is a jump label
/*801D6124 001D2F24*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc8);
/*801D6128 001D2F28*/ PPC::Runtime::ASM::bl(fn_8006A250);
/*801D612C 001D2F2C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x944, context->r31));
/*801D6130 001D2F30*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f31);
/*801D6134 001D2F34*/ PPC::Runtime::ASM::beq(.L_801D6150);
/*801D6138 001D2F38*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D613C 001D2F3C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc8);
/*801D6140 001D2F40*/ PPC::Runtime::ASM::li(context->r5, 0x19);
/*801D6144 001D2F44*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801D6148 001D2F48*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801D614C 001D2F4C*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801D6150, 0x801D6150) //this is a jump label
/*801D6150 001D2F50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D6154 001D2F54*/ PPC::Runtime::ASM::bl(fn_801D6668);
/*801D6158 001D2F58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D615C 001D2F5C*/ PPC::Runtime::ASM::bl(fn_801CB0C0);
/*801D6160 001D2F60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xba8, context->r31));
/*801D6164 001D2F64*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801D6168 001D2F68*/ PPC::Runtime::ASM::beq(.L_801D6184);
/*801D616C 001D2F6C*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D6170 001D2F70*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc8);
/*801D6174 001D2F74*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*801D6178 001D2F78*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801D617C 001D2F7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801D6180 001D2F80*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801D6184, 0x801D6184) //this is a jump label
/*801D6184 001D2F84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D6188 001D2F88*/ PPC::Runtime::ASM::bl(fn_801E1EC4);
/*801D618C 001D2F8C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D6190 001D2F90*/ PPC::Runtime::ASM::beq(.L_801D61AC);
/*801D6194 001D2F94*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D6198 001D2F98*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc8);
/*801D619C 001D2F9C*/ PPC::Runtime::ASM::li(context->r5, 0x30);
/*801D61A0 001D2FA0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801D61A4 001D2FA4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801D61A8 001D2FA8*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801D61AC, 0x801D61AC) //this is a jump label
/*801D61AC 001D2FAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/* 801D61B0 001D2FB0  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801D61B4 001D2FB4*/ PPC::Runtime::ASM::beq(.L_801D61D0);
/*801D61B8 001D2FB8*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D61BC 001D2FBC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc8);
/*801D61C0 001D2FC0*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*801D61C4 001D2FC4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801D61C8 001D2FC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801D61CC 001D2FCC*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801D61D0, 0x801D61D0) //this is a jump label
/*801D61D0 001D2FD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r31));
/*801D61D4 001D2FD4*/ PPC::Runtime::ASM::bl(fn_8018CD70);
/*801D61D8 001D2FD8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*801D61DC 001D2FDC*/ PPC::Runtime::ASM::bne(.L_801D61F8);
/*801D61E0 001D2FE0*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D61E4 001D2FE4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc8);
/*801D61E8 001D2FE8*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*801D61EC 001D2FEC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801D61F0 001D2FF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801D61F4 001D2FF4*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801D61F8, 0x801D61F8) //this is a jump label
/*801D61F8 001D2FF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r31));
/*801D61FC 001D2FFC*/ PPC::Runtime::ASM::bl(fn_8018CD70);
/*801D6200 001D3000*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*801D6204 001D3004*/ PPC::Runtime::ASM::bne(.L_801D6220);
/*801D6208 001D3008*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D620C 001D300C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc8);
/*801D6210 001D3010*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*801D6214 001D3014*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801D6218 001D3018*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801D621C 001D301C*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801D6220, 0x801D6220) //this is a jump label
/*801D6220 001D3020*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801D6224 001D3024*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F98 @ Get_MemoryOffset_SDA21);
/*801D6228 001D3028*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801D622C 001D302C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801D6230 001D3030*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*801D6234 001D3034*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801D6238 001D3038*/ PPC::Runtime::ASM::beq(.L_801D6248);
/*801D623C 001D303C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D6240 001D3040*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801D6244 001D3044*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801D6248, 0x801D6248) //this is a jump label
/*801D6248 001D3048*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D624C 001D304C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*801D6250 001D3050*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc8);
/*801D6254 001D3054*/ PPC::Runtime::ASM::bl(fn_80069F74);
/*801D6258 001D3058*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D625C 001D305C*/ PPC::Runtime::ASM::bne(.L_801D6124);
/*801D6260 001D3060*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D6264 001D3064*/ PPC::Runtime::ASM::bl(fn_801D6318);
/*801D6268 001D3068*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x174);
/*801D626C 001D306C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*801D6270 001D3070*/ PPC::Runtime::ASM::bne(.L_801D6280);
/*801D6274 001D3074*/ PPC::Runtime::ASM::lis(context->r3, fn_801D5B84 @ Get_MemoryOffset_HighBit);
/*801D6278 001D3078*/ PPC::Runtime::ASM::addi(context->r30, context->r3, fn_801D5B84 @ Get_MemoryOffset_LowBit);
/*801D627C 001D307C*/ PPC::Runtime::ASM::b(.L_801D6294);
RUNTIME_PPC_JUMP_LABEL(.L_801D6280, 0x801D6280) //this is a jump label
/*801D6280 001D3080*/ PPC::Runtime::ASM::lis(context->r3, fn_801D5BBC @ Get_MemoryOffset_HighBit);
/*801D6284 001D3084*/ PPC::Runtime::ASM::addi(context->r30, context->r3, fn_801D5BBC @ Get_MemoryOffset_LowBit);
/*801D6288 001D3088*/ PPC::Runtime::ASM::b(.L_801D6294);
RUNTIME_PPC_JUMP_LABEL(.L_801D628C, 0x801D628C) //this is a jump label
/*801D628C 001D308C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x174);
/*801D6290 001D3090*/ PPC::Runtime::ASM::bl(fn_8006A250);
RUNTIME_PPC_JUMP_LABEL(.L_801D6294, 0x801D6294) //this is a jump label
/*801D6294 001D3094*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D6298 001D3098*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*801D629C 001D309C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x174);
/*801D62A0 001D30A0*/ PPC::Runtime::ASM::bl(fn_80069F74);
/*801D62A4 001D30A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D62A8 001D30A8*/ PPC::Runtime::ASM::bne(.L_801D628C);
/*801D62AC 001D30AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D62B0 001D30B0*/ PPC::Runtime::ASM::bl(fn_801D6318);
/*801D62B4 001D30B4*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x220);
/*801D62B8 001D30B8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*801D62BC 001D30BC*/ PPC::Runtime::ASM::bne(.L_801D62CC);
/*801D62C0 001D30C0*/ PPC::Runtime::ASM::lis(context->r3, fn_801D5B84 @ Get_MemoryOffset_HighBit);
/*801D62C4 001D30C4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, fn_801D5B84 @ Get_MemoryOffset_LowBit);
/*801D62C8 001D30C8*/ PPC::Runtime::ASM::b(.L_801D62E0);
RUNTIME_PPC_JUMP_LABEL(.L_801D62CC, 0x801D62CC) //this is a jump label
/*801D62CC 001D30CC*/ PPC::Runtime::ASM::lis(context->r3, fn_801D5BBC @ Get_MemoryOffset_HighBit);
/*801D62D0 001D30D0*/ PPC::Runtime::ASM::addi(context->r30, context->r3, fn_801D5BBC @ Get_MemoryOffset_LowBit);
/*801D62D4 001D30D4*/ PPC::Runtime::ASM::b(.L_801D62E0);
RUNTIME_PPC_JUMP_LABEL(.L_801D62D8, 0x801D62D8) //this is a jump label
/*801D62D8 001D30D8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x220);
/*801D62DC 001D30DC*/ PPC::Runtime::ASM::bl(fn_8006A250);
RUNTIME_PPC_JUMP_LABEL(.L_801D62E0, 0x801D62E0) //this is a jump label
/*801D62E0 001D30E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D62E4 001D30E4*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*801D62E8 001D30E8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x220);
/*801D62EC 001D30EC*/ PPC::Runtime::ASM::bl(fn_80069F74);
/*801D62F0 001D30F0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D62F4 001D30F4*/ PPC::Runtime::ASM::bne(.L_801D62D8);
/*801D62F8 001D30F8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801D62FC 001D30FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801D6300 001D3100*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D6304 001D3104*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D6308 001D3108*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D630C 001D310C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D6310 001D3110*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801D6314 001D3114*/ PPC::Runtime::ASM::blr();
}