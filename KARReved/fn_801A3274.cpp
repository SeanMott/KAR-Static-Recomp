//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190A88.hpp"
#include "fn_80193F54.hpp"
#include "fn_801A35EC.hpp"
#include "fn_801A2D78.hpp"
#include "fn_801A2D7C.hpp"
#include "fn_801A2D78.hpp"
#include "fn_801A2D7C.hpp"
#include "fn_80190774.hpp"
#include "fn_80190788.hpp"
#include "fn_8019079C.hpp"
#include "fn_801907BC.hpp"
#include "fn_8022D684.hpp"
#include "fn_8022D69C.hpp"
#include "fn_updateHPGraphic.hpp"
#include "fn_8022CA90.hpp"
#include "fn_8019D330.hpp"
#include "fn_80279FA4.hpp"
#include "fn_801915C4.hpp"
#include "fn_8019DF88.hpp"



void fn_801A3274(PPC::Runtime::GCContext* context)
{
/*801A3274 001A0074*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A3278 001A0078*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A327C 001A007C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A3280 001A0080*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A3284 001A0084*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A3288 001A0088*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A328C 001A008C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r3));
/*801A3290 001A0090*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*801A3294 001A0094*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r3));
/*801A3298 001A0098*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r3));
/*801A329C 001A009C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*801A32A0 001A00A0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r3));
/*801A32A4 001A00A4*/ PPC::Runtime::ASM::bl(fn_80190A88);
/*801A32A8 001A00A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A32AC 001A00AC*/ PPC::Runtime::ASM::bl(fn_80193F54);
/*801A32B0 001A00B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A32B4 001A00B4*/ PPC::Runtime::ASM::bl(fn_801A35EC);
/*801A32B8 001A00B8*/ PPC::Runtime::ASM::lis(context->r4, fn_801A2D78 @ Get_MemoryOffset_HighBit);
/*801A32BC 001A00BC*/ PPC::Runtime::ASM::lis(context->r3, fn_801A2D7C @ Get_MemoryOffset_HighBit);
/*801A32C0 001A00C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_801A2D78 @ Get_MemoryOffset_LowBit);
/*801A32C4 001A00C4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A32C8 001A00C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r31));
/*801A32CC 001A00CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801A2D7C @ Get_MemoryOffset_LowBit);
/*801A32D0 001A00D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A32D4 001A00D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d8, context->r31));
/*801A32D8 001A00D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r31));
/*801A32DC 001A00DC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*801A32E0 001A00E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r31));
/*801A32E4 001A00E4*/ PPC::Runtime::ASM::bl(fn_80190774);
/*801A32E8 001A00E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A32EC 001A00EC*/ PPC::Runtime::ASM::bl(fn_80190788);
/*801A32F0 001A00F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A32F4 001A00F4*/ PPC::Runtime::ASM::bl(fn_8019079C);
/*801A32F8 001A00F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A32FC 001A00FC*/ PPC::Runtime::ASM::bl(fn_801907BC);
/*801A3300 001A0100*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801A3304 001A0104*/ PPC::Runtime::ASM::bl(fn_8022D684);
/*801A3308 001A0108*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801A330C 001A010C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801A3310 001A0110*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*801A3314 001A0114*/ PPC::Runtime::ASM::bl(fn_8022D69C);
/*801A3318 001A0118*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801A331C 001A011C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1290 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3320 001A0120*/ PPC::Runtime::ASM::bl(fn_updateHPGraphic);
/*801A3324 001A0124*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801A3328 001A0128*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1290 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A332C 001A012C*/ PPC::Runtime::ASM::bl(fn_8022CA90);
/*801A3330 001A0130*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A3334 001A0134*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x74c);
/*801A3338 001A0138*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*801A333C 001A013C*/ PPC::Runtime::ASM::bl(fn_8019D330);
/*801A3340 001A0140*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801A3344 001A0144*/ PPC::Runtime::ASM::bl(fn_80279FA4);
/*801A3348 001A0148*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A334C 001A014C*/ PPC::Runtime::ASM::bl(fn_801915C4);
/*801A3350 001A0150*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3354 001A0154*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A3358 001A0158*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A335C 001A015C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x278, context->r5));
/*801A3360 001A0160*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa78, context->r31));
/*801A3364 001A0164*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r31));
/*801A3368 001A0168*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*801A336C 001A016C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r31));
/*801A3370 001A0170*/ PPC::Runtime::ASM::bl(fn_8019DF88);
/*801A3374 001A0174*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A3378 001A0178*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A337C 001A017C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A3380 001A0180*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A3384 001A0184*/ PPC::Runtime::ASM::blr();
}