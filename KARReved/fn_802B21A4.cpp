//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80319BDC.hpp"
#include "fn_8031A74C.hpp"
#include "fn_8034BF50.hpp"



void fn_802B21A4(PPC::Runtime::GCContext* context)
{
/*802B21A4 002AEFA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc0, context->r1));
/*802B21A8 002AEFA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B21AC 002AEFAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802B21B0 002AEFB0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*802B21B4 002AEFB4*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802B21B8 002AEFB8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802B21BC 002AEFBC*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*802B21C0 002AEFC0*/ PPC::Runtime::ASM::bl(fn_8039E4B4);
/*802B21C4 002AEFC4*/ PPC::Runtime::ASM::lbz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd70, context->r31));
/*802B21C8 002AEFC8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B21CC 002AEFCC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd20, context->r31));
/*802B21D0 002AEFD0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7EB8 @ Get_MemoryOffset_SDA21);
/*802B21D4 002AEFD4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B21D8 002AEFD8*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7EB0 @ Get_MemoryOffset_SDA21);
/*802B21DC 002AEFDC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B21E0 002AEFE0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B21E4 002AEFE4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x16);
/*802B21E8 002AEFE8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802B21EC 002AEFEC*/ PPC::Runtime::ASM::blt(.L_802B2210);
/*802B21F0 002AEFF0*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802B21F4 002AEFF4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4AD0 @ Get_MemoryOffset_HighBit);
/*802B21F8 002AEFF8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802B21FC 002AEFFC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804C4AD0 @ Get_MemoryOffset_LowBit);
/*802B2200 002AF000*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*802B2204 002AF004*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802B2208 002AF008*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802B220C 002AF00C*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802B2210, 0x802B2210) //this is a jump label
/* 802B2210 002AF010  57 A0 06 3F */ clrlwi. context->r0 , context->r29 , 24
/*802B2214 002AF014*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802B2218 002AF018*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r28);
/*802B221C 002AF01C*/ PPC::Runtime::ASM::beq(.L_802B2230);
/*802B2220 002AF020*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B2224 002AF024*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*802B2228 002AF028*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B222C 002AF02C*/ PPC::Runtime::ASM::b(.L_802B223C);
RUNTIME_PPC_JUMP_LABEL(.L_802B2230, 0x802B2230) //this is a jump label
/*802B2230 002AF030*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B2234 002AF034*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r3);
/*802B2238 002AF038*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802B223C, 0x802B223C) //this is a jump label
/*802B223C 002AF03C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802B2240 002AF040*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B2244 002AF044*/ PPC::Runtime::ASM::beq(.L_802B237C);
/*802B2248 002AF048*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802B224C 002AF04C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B2250 002AF050*/ PPC::Runtime::ASM::li(context->r5, lbl_805D800C @ Get_MemoryOffset_SDA21);
/*802B2254 002AF054*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7F20 @ Get_MemoryOffset_SDA21);
/*802B2258 002AF058*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B225C 002AF05C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B2260 002AF060*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802B2264 002AF064*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 802B2268 002AF068  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802B226C 002AF06C*/ PPC::Runtime::ASM::beq(.L_802B236C);
/*802B2270 002AF070*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B2274 002AF074*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B2278 002AF078*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FA8 @ Get_MemoryOffset_SDA21);
/*802B227C 002AF07C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FA0 @ Get_MemoryOffset_SDA21);
/*802B2280 002AF080*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B2284 002AF084*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B2288 002AF088*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B228C 002AF08C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*802B2290 002AF090*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802B2294 002AF094*/ PPC::Runtime::ASM::bctrl();
/*802B2298 002AF098*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802B229C 002AF09C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x70);
/*802B22A0 002AF0A0*/ PPC::Runtime::ASM::bl(fn_80319BDC);
/*802B22A4 002AF0A4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3458 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B22A8 002AF0A8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802B22AC 002AF0AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802B22B0 002AF0B0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802B22B4 002AF0B4*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*802B22B8 002AF0B8*/ PPC::Runtime::ASM::bl(fn_8031A74C);
/*802B22BC 002AF0BC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E33C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B22C0 002AF0C0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802B22C4 002AF0C4*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E3450 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B22C8 002AF0C8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802B22CC 002AF0CC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802B22D0 002AF0D0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802B22D4 002AF0D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802B22D8 002AF0D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802B22DC 002AF0DC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802B22E0 002AF0E0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802B22E4 002AF0E4*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B22E8 002AF0E8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B22EC 002AF0EC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B22F0 002AF0F0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B22F4 002AF0F4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802B22F8 002AF0F8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B22FC 002AF0FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B2300 002AF100*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*802B2304 002AF104*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802B2308 002AF108*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B230C 002AF10C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B2310 002AF110*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7EB8 @ Get_MemoryOffset_SDA21);
/*802B2314 002AF114*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B2318 002AF118*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7EB0 @ Get_MemoryOffset_SDA21);
/*802B231C 002AF11C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802B2320 002AF120*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B2324 002AF124*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B2328 002AF128*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802B232C 002AF12C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802B2330 002AF130*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B2334 002AF134*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd20, context->r31));
/*802B2338 002AF138*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*802B233C 002AF13C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*802B2340 002AF140*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B2344 002AF144*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*802B2348 002AF148*/ PPC::Runtime::ASM::bl(fn_8034BF50);
/*802B234C 002AF14C*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x38);
/*802B2350 002AF150*/ PPC::Runtime::ASM::beq(.L_802B2360);
/*802B2354 002AF154*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802B2358 002AF158*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802B235C 002AF15C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802B2360, 0x802B2360) //this is a jump label
/*802B2360 002AF160*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802B2364 002AF164*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802B2368 002AF168*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802B236C, 0x802B236C) //this is a jump label
/*802B236C 002AF16C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*802B2370 002AF170*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*802B2374 002AF174*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B2378 002AF178*/ PPC::Runtime::ASM::b(.L_802B2388);
RUNTIME_PPC_JUMP_LABEL(.L_802B237C, 0x802B237C) //this is a jump label
/*802B237C 002AF17C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*802B2380 002AF180*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B2384 002AF184*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802B2388, 0x802B2388) //this is a jump label
/*802B2388 002AF188*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*802B238C 002AF18C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802B2390 002AF190*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802B2394 002AF194*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B2398 002AF198*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xc0);
/*802B239C 002AF19C*/ PPC::Runtime::ASM::blr();
}