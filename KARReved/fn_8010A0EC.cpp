//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F7870.hpp"
#include "fn_800EA084.hpp"
#include "fn_800D4BF4.hpp"
#include "fn_800E9F50.hpp"
#include "fn_800EA084.hpp"
#include "fn_800D4BF4.hpp"
#include "fn_800E9F50.hpp"
#include "fn_800EA084.hpp"
#include "fn_800547E0.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800DBAE0.hpp"
#include "fn_800DBD3C.hpp"
#include "fn_800DBAE0.hpp"
#include "fn_800DBD3C.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800DBAE0.hpp"
#include "fn_800DBD3C.hpp"
#include "fn_800DBAE0.hpp"
#include "fn_800DBD3C.hpp"



void fn_8010A0EC(PPC::Runtime::GCContext* context)
{
/*8010A0EC 00106EEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8010A0F0 00106EF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010A0F4 00106EF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8010A0F8 00106EF8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8010A0FC 00106EFC*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*8010A100 00106F00*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8010A104 00106F04*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A108 00106F08*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010A10C 00106F0C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8010A110 00106F10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r30));
/*8010A114 00106F14*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8010A118 00106F18*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8010A11C 00106F1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r30));
/*8010A120 00106F20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8010A124 00106F24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8010A128 00106F28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8010A12C 00106F2C*/ PPC::Runtime::ASM::beq(.L_8010A198);
/*8010A130 00106F30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010A134 00106F34*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010A138 00106F38*/ PPC::Runtime::ASM::bl(fn_800F7870);
/*8010A13C 00106F3C*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*8010A140 00106F40*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*8010A144 00106F44*/ PPC::Runtime::ASM::b(.L_8010A18C);
RUNTIME_PPC_JUMP_LABEL(.L_8010A148, 0x8010A148) //this is a jump label
/*8010A148 00106F48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*8010A14C 00106F4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r30));
/*8010A150 00106F50*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r26);
/*8010A154 00106F54*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8010A158 00106F58*/ PPC::Runtime::ASM::bne(.L_8010A184);
/*8010A15C 00106F5C*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8010A160 00106F60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8010A164 00106F64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8010A168 00106F68*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8010A16C 00106F6C*/ PPC::Runtime::ASM::bne(.L_8010A184);
/*8010A170 00106F70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r30));
/*8010A174 00106F74*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8010A178 00106F78*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8010A17C 00106F7C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*8010A180 00106F80*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_8010A184, 0x8010A184) //this is a jump label
/*8010A184 00106F84*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*8010A188 00106F88*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010A18C, 0x8010A18C) //this is a jump label
/*8010A18C 00106F8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8010A190 00106F90*/ PPC::Runtime::ASM::cmpw(context->r24, context->r0);
/*8010A194 00106F94*/ PPC::Runtime::ASM::blt(.L_8010A148);
RUNTIME_PPC_JUMP_LABEL(.L_8010A198, 0x8010A198) //this is a jump label
/*8010A198 00106F98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8010A19C 00106F9C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8010A1A0 00106FA0*/ PPC::Runtime::ASM::beq(.L_8010A210);
/*8010A1A4 00106FA4*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*8010A1A8 00106FA8*/ PPC::Runtime::ASM::mr(context->r25, context->r24);
/*8010A1AC 00106FAC*/ PPC::Runtime::ASM::b(.L_8010A204);
RUNTIME_PPC_JUMP_LABEL(.L_8010A1B0, 0x8010A1B0) //this is a jump label
/*8010A1B0 00106FB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8010A1B4 00106FB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r30));
/*8010A1B8 00106FB8*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r25);
/*8010A1BC 00106FBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8010A1C0 00106FC0*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8010A1C4 00106FC4*/ PPC::Runtime::ASM::bne(.L_8010A1FC);
/*8010A1C8 00106FC8*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8010A1CC 00106FCC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8010A1D0 00106FD0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8010A1D4 00106FD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8010A1D8 00106FD8*/ PPC::Runtime::ASM::bl(fn_800D4BF4);
/*8010A1DC 00106FDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8010A1E0 00106FE0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8010A1E4 00106FE4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r30));
/*8010A1E8 00106FE8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8010A1EC 00106FEC*/ PPC::Runtime::ASM::bl(fn_800E9F50);
/*8010A1F0 00106FF0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8010A1F4 00106FF4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x130);
/*8010A1F8 00106FF8*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_8010A1FC, 0x8010A1FC) //this is a jump label
/*8010A1FC 00106FFC*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0xc);
/*8010A200 00107000*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010A204, 0x8010A204) //this is a jump label
/*8010A204 00107004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8010A208 00107008*/ PPC::Runtime::ASM::cmpw(context->r24, context->r0);
/*8010A20C 0010700C*/ PPC::Runtime::ASM::blt(.L_8010A1B0);
RUNTIME_PPC_JUMP_LABEL(.L_8010A210, 0x8010A210) //this is a jump label
/*8010A210 00107010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*8010A214 00107014*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8010A218 00107018*/ PPC::Runtime::ASM::beq(.L_8010A288);
/*8010A21C 0010701C*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*8010A220 00107020*/ PPC::Runtime::ASM::mr(context->r25, context->r24);
/*8010A224 00107024*/ PPC::Runtime::ASM::b(.L_8010A27C);
RUNTIME_PPC_JUMP_LABEL(.L_8010A228, 0x8010A228) //this is a jump label
/*8010A228 00107028*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8010A22C 0010702C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r30));
/*8010A230 00107030*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r25);
/*8010A234 00107034*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8010A238 00107038*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8010A23C 0010703C*/ PPC::Runtime::ASM::bne(.L_8010A274);
/*8010A240 00107040*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8010A244 00107044*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8010A248 00107048*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*8010A24C 0010704C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8010A250 00107050*/ PPC::Runtime::ASM::bl(fn_800D4BF4);
/*8010A254 00107054*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8010A258 00107058*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8010A25C 0010705C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r30));
/*8010A260 00107060*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8010A264 00107064*/ PPC::Runtime::ASM::bl(fn_800E9F50);
/*8010A268 00107068*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8010A26C 0010706C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x144);
/*8010A270 00107070*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_8010A274, 0x8010A274) //this is a jump label
/*8010A274 00107074*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0xc);
/*8010A278 00107078*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010A27C, 0x8010A27C) //this is a jump label
/*8010A27C 0010707C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8010A280 00107080*/ PPC::Runtime::ASM::cmpw(context->r24, context->r0);
/*8010A284 00107084*/ PPC::Runtime::ASM::blt(.L_8010A228);
RUNTIME_PPC_JUMP_LABEL(.L_8010A288, 0x8010A288) //this is a jump label
/*8010A288 00107088*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010A28C 0010708C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8010A290 00107090*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*8010A294 00107094*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*8010A298 00107098*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*8010A29C 0010709C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8010A2A0 001070A0*/ PPC::Runtime::ASM::bne(.L_8010A438);
/*8010A2A4 001070A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*8010A2A8 001070A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8010A2AC 001070AC*/ PPC::Runtime::ASM::ble(.L_8010A388);
/*8010A2B0 001070B0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8010A2B4 001070B4*/ PPC::Runtime::ASM::lwz(context->r28, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A2B8 001070B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8010A2BC 001070BC*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010A2C0 001070C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*8010A2C4 001070C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r27));
/*8010A2C8 001070C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*8010A2CC 001070CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*8010A2D0 001070D0*/ PPC::Runtime::ASM::subf.(context->r3, context->r3, context->r0);
/*8010A2D4 001070D4*/ PPC::Runtime::ASM::ble(.L_8010A2E8);
/*8010A2D8 001070D8*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8010A2DC 001070DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r27));
/*8010A2E0 001070E0*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8010A2E4 001070E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_8010A2E8, 0x8010A2E8) //this is a jump label
/*8010A2E8 001070E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A2EC 001070EC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8010A2F0 001070F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8010A2F4 001070F4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010A2F8 001070F8*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8010A2FC 001070FC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8010A300 00107100*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8010A304 00107104*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8010A308 00107108*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*8010A30C 0010710C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8010A310 00107110*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8010A314 00107114*/ PPC::Runtime::ASM::beq(.L_8010A348);
/*8010A318 00107118*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8010A31C 0010711C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8010A320 00107120*/ PPC::Runtime::ASM::beq(.L_8010A348);
/*8010A324 00107124*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A328 00107128*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8010A32C 0010712C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8010A330 00107130*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8010A334 00107134*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8010A338 00107138*/ PPC::Runtime::ASM::bl(fn_800DBAE0);
/*8010A33C 0010713C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8010A340 00107140*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8010A344 00107144*/ PPC::Runtime::ASM::bl(fn_800DBD3C);
RUNTIME_PPC_JUMP_LABEL(.L_8010A348, 0x8010A348) //this is a jump label
/*8010A348 00107148*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8010A34C 0010714C*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8010A350 00107150*/ PPC::Runtime::ASM::beq(.L_8010A438);
/*8010A354 00107154*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8010A358 00107158*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8010A35C 0010715C*/ PPC::Runtime::ASM::beq(.L_8010A438);
/*8010A360 00107160*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A364 00107164*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8010A368 00107168*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8010A36C 0010716C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8010A370 00107170*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8010A374 00107174*/ PPC::Runtime::ASM::bl(fn_800DBAE0);
/*8010A378 00107178*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8010A37C 0010717C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8010A380 00107180*/ PPC::Runtime::ASM::bl(fn_800DBD3C);
/*8010A384 00107184*/ PPC::Runtime::ASM::b(.L_8010A438);
RUNTIME_PPC_JUMP_LABEL(.L_8010A388, 0x8010A388) //this is a jump label
/*8010A388 00107188*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8010A38C 0010718C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8010A390 00107190*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A394 00107194*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8010A398 00107198*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8010A39C 0010719C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8010A3A0 001071A0*/ PPC::Runtime::ASM::lwz(context->r27, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A3A4 001071A4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8010A3A8 001071A8*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8010A3AC 001071AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r3));
/*8010A3B0 001071B0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8010A3B4 001071B4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8010A3B8 001071B8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*8010A3BC 001071BC*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*8010A3C0 001071C0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8010A3C4 001071C4*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8010A3C8 001071C8*/ PPC::Runtime::ASM::beq(.L_8010A3FC);
/*8010A3CC 001071CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8010A3D0 001071D0*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8010A3D4 001071D4*/ PPC::Runtime::ASM::beq(.L_8010A3FC);
/*8010A3D8 001071D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8010A3DC 001071DC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8010A3E0 001071E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*8010A3E4 001071E4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8010A3E8 001071E8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A3EC 001071EC*/ PPC::Runtime::ASM::bl(fn_800DBAE0);
/*8010A3F0 001071F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8010A3F4 001071F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8010A3F8 001071F8*/ PPC::Runtime::ASM::bl(fn_800DBD3C);
RUNTIME_PPC_JUMP_LABEL(.L_8010A3FC, 0x8010A3FC) //this is a jump label
/*8010A3FC 001071FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8010A400 00107200*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8010A404 00107204*/ PPC::Runtime::ASM::beq(.L_8010A438);
/*8010A408 00107208*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8010A40C 0010720C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8010A410 00107210*/ PPC::Runtime::ASM::beq(.L_8010A438);
/*8010A414 00107214*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8010A418 00107218*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8010A41C 0010721C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*8010A420 00107220*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8010A424 00107224*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010A428 00107228*/ PPC::Runtime::ASM::bl(fn_800DBAE0);
/*8010A42C 0010722C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8010A430 00107230*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8010A434 00107234*/ PPC::Runtime::ASM::bl(fn_800DBD3C);
RUNTIME_PPC_JUMP_LABEL(.L_8010A438, 0x8010A438) //this is a jump label
/*8010A438 00107238*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8010A43C 0010723C*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*8010A440 00107240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8010A444 00107244*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010A448 00107248*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8010A44C 0010724C*/ PPC::Runtime::ASM::blr();
}