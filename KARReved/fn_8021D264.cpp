//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_8020D608.hpp"
#include "fn_8020D608.hpp"
#include "fn_8021D3D8.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_801FC398.hpp"
#include "fn_8018CB28.hpp"



void fn_8021D264(PPC::Runtime::GCContext* context)
{
/*8021D264 0021A064*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8021D268 0021A068*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021D26C 0021A06C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021D270 0021A070*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021D274 0021A074*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021D278 0021A078*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*8021D27C 0021A07C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021D280 0021A080*/ PPC::Runtime::ASM::beq(.L_8021D3A8);
/*8021D284 0021A084*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb56, context->r31));
/*8021D288 0021A088*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021D28C 0021A08C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8021D290 0021A090*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8021D294 0021A094*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8021D298 0021A098*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021D29C 0021A09C*/ PPC::Runtime::ASM::bge(.L_8021D2B0);
/*8021D2A0 0021A0A0*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
/*8021D2A4 0021A0A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8021D2A8 0021A0A8*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8021D2AC 0021A0AC*/ PPC::Runtime::ASM::blt(.L_8021D2C0);
RUNTIME_PPC_JUMP_LABEL(.L_8021D2B0, 0x8021D2B0) //this is a jump label
/*8021D2B0 0021A0B0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021D2B4 0021A0B4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021D2B8 0021A0B8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9a, context->r31));
/*8021D2BC 0021A0BC*/ PPC::Runtime::ASM::b(.L_8021D368);
RUNTIME_PPC_JUMP_LABEL(.L_8021D2C0, 0x8021D2C0) //this is a jump label
/*8021D2C0 0021A0C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8021D2C4 0021A0C4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021D2C8 0021A0C8*/ PPC::Runtime::ASM::bgt(.L_8021D338);
/*8021D2CC 0021A0CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r31));
/*8021D2D0 0021A0D0*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*8021D2D4 0021A0D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b0, context->r31));
/*8021D2D8 0021A0D8*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*8021D2DC 0021A0DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021D2E0 0021A0E0*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8021D2E4 0021A0E4*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D2E8 0021A0E8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021D2EC 0021A0EC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021D2F0 0021A0F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021D2F4 0021A0F4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8021D2F8 0021A0F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021D2FC 0021A0FC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021D300 0021A100*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8021D304 0021A104*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8021D308 0021A108*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8021D30C 0021A10C*/ PPC::Runtime::ASM::bne(.L_8021D368);
/*8021D310 0021A110*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8021D314 0021A114*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D318 0021A118*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7960);
/*8021D31C 0021A11C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021D320 0021A120*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r31));
/*8021D324 0021A124*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xa0);
/*8021D328 0021A128*/ PPC::Runtime::ASM::bl(fn_8020D608);
/*8021D32C 0021A12C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021D330 0021A130*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9a, context->r31));
/*8021D334 0021A134*/ PPC::Runtime::ASM::b(.L_8021D368);
RUNTIME_PPC_JUMP_LABEL(.L_8021D338, 0x8021D338) //this is a jump label
/*8021D338 0021A138*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb54, context->r31));
/*8021D33C 0021A13C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8021D340 0021A140*/ PPC::Runtime::ASM::blt(.L_8021D368);
/*8021D344 0021A144*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8021D348 0021A148*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D34C 0021A14C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7960);
/*8021D350 0021A150*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021D354 0021A154*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r31));
/*8021D358 0021A158*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xa0);
/*8021D35C 0021A15C*/ PPC::Runtime::ASM::bl(fn_8020D608);
/*8021D360 0021A160*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021D364 0021A164*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9a, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8021D368, 0x8021D368) //this is a jump label
/*8021D368 0021A168*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*8021D36C 0021A16C*/ PPC::Runtime::ASM::beq(.L_8021D37C);
/*8021D370 0021A170*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D374 0021A174*/ PPC::Runtime::ASM::bl(fn_8021D3D8);
/*8021D378 0021A178*/ PPC::Runtime::ASM::b(.L_8021D3A8);
RUNTIME_PPC_JUMP_LABEL(.L_8021D37C, 0x8021D37C) //this is a jump label
/*8021D37C 0021A17C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D380 0021A180*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8021D384 0021A184*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D388 0021A188*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D38C 0021A18C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E277C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D390 0021A190*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*8021D394 0021A194*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8021D398 0021A198*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021D39C 0021A19C*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8021D3A0 0021A1A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r31));
/*8021D3A4 0021A1A4*/ PPC::Runtime::ASM::bl(fn_8018CB28);
RUNTIME_PPC_JUMP_LABEL(.L_8021D3A8, 0x8021D3A8) //this is a jump label
/*8021D3A8 0021A1A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021D3AC 0021A1AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021D3B0 0021A1B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021D3B4 0021A1B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8021D3B8 0021A1B8*/ PPC::Runtime::ASM::blr();
}