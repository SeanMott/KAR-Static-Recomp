//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FD6B0.hpp"
#include "fn_802041B0.hpp"
#include "fn_8018CB04.hpp"
#include "fn_801FC398.hpp"
#include "fn_802019FC.hpp"



void fn_8021D3D8(PPC::Runtime::GCContext* context)
{
/*8021D3D8 0021A1D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021D3DC 0021A1DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021D3E0 0021A1E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021D3E4 0021A1E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021D3E8 0021A1E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021D3EC 0021A1EC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8021D3F0 0021A1F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8021D3F4 0021A1F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021D3F8 0021A1F8*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8021D3FC 0021A1FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8021D400 0021A200*/ PPC::Runtime::ASM::bl(fn_802041B0);
/*8021D404 0021A204*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
/*8021D408 0021A208*/ PPC::Runtime::ASM::bl(fn_8018CB04);
/*8021D40C 0021A20C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D410 0021A210*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021D414 0021A214*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E277C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D418 0021A218*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*8021D41C 0021A21C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8021D420 0021A220*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021D424 0021A224*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8021D428 0021A228*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r30));
/*8021D42C 0021A22C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_4 @ Get_MemoryOffset_HighBit);
/*8021D430 0021A230*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r30));
/*8021D434 0021A234*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_4 @ Get_MemoryOffset_LowBit);
/*8021D438 0021A238*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb68, context->r30));
/*8021D43C 0021A23C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb6c, context->r30));
/*8021D440 0021A240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r30));
/*8021D444 0021A244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb70, context->r30));
/*8021D448 0021A248*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb68, context->r30));
/*8021D44C 0021A24C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb6c, context->r30));
/*8021D450 0021A250*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb5c, context->r30));
/*8021D454 0021A254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r30));
/*8021D458 0021A258*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb70, context->r30));
/*8021D45C 0021A25C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb64, context->r30));
/*8021D460 0021A260*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8021D464 0021A264*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021D468 0021A268*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb80, context->r30));
/*8021D46C 0021A26C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb84, context->r30));
/*8021D470 0021A270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8021D474 0021A274*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb88, context->r30));
/*8021D478 0021A278*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb80, context->r30));
/*8021D47C 0021A27C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb84, context->r30));
/*8021D480 0021A280*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb74, context->r30));
/*8021D484 0021A284*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb78, context->r30));
/*8021D488 0021A288*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb88, context->r30));
/*8021D48C 0021A28C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7c, context->r30));
/*8021D490 0021A290*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8021D494 0021A294*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021D498 0021A298*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8c, context->r30));
/*8021D49C 0021A29C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb90, context->r30));
/*8021D4A0 0021A2A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8021D4A4 0021A2A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb94, context->r30));
/*8021D4A8 0021A2A8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9a, context->r30));
/*8021D4AC 0021A2AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8021D4B0 0021A2B0*/ PPC::Runtime::ASM::beq(.L_8021D4D4);
/*8021D4B4 0021A2B4*/ PPC::Runtime::ASM::bge(.L_8021D4D4);
/*8021D4B8 0021A2B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8021D4BC 0021A2BC*/ PPC::Runtime::ASM::bge(.L_8021D4C4);
/*8021D4C0 0021A2C0*/ PPC::Runtime::ASM::b(.L_8021D4D4);
RUNTIME_PPC_JUMP_LABEL(.L_8021D4C4, 0x8021D4C4) //this is a jump label
/*8021D4C4 0021A2C4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8021D4C8 0021A2C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021D4CC 0021A2CC*/ PPC::Runtime::ASM::li(context->r4, 0x1f);
/*8021D4D0 0021A2D0*/ PPC::Runtime::ASM::bl(fn_802019FC);
RUNTIME_PPC_JUMP_LABEL(.L_8021D4D4, 0x8021D4D4) //this is a jump label
/*8021D4D4 0021A2D4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D4D8 0021A2D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E277C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D4DC 0021A2DC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r30));
/*8021D4E0 0021A2E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r30));
/*8021D4E4 0021A2E4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x348, context->r30));
/*8021D4E8 0021A2E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021D4EC 0021A2EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021D4F0 0021A2F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021D4F4 0021A2F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021D4F8 0021A2F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021D4FC 0021A2FC*/ PPC::Runtime::ASM::blr();
}