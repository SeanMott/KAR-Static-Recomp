//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000A188.hpp"
#include "fn_801D5CA0.hpp"



void fn_801E2244(PPC::Runtime::GCContext* context)
{
/*801E2244 001DF044*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801E2248 001DF048*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E224C 001DF04C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801E2250 001DF050*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E2254 001DF054*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801E2258 001DF058*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E225C 001DF05C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E2260 001DF060*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E2264 001DF064*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E1D00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E2268 001DF068*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6b0, context->r3));
/*801E226C 001DF06C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f31);
/*801E2270 001DF070*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6b0, context->r3));
/*801E2274 001DF074*/ PPC::Runtime::ASM::bl(fn_8000A188);
/*801E2278 001DF078*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E227C 001DF07C*/ PPC::Runtime::ASM::beq(.L_801E229C);
/*801E2280 001DF080*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4cc, context->r30));
/*801E2284 001DF084*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*801E2288 001DF088*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1D00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E228C 001DF08C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*801E2290 001DF090*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801E2294 001DF094*/ PPC::Runtime::ASM::bge(.L_801E229C);
/*801E2298 001DF098*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_801E229C, 0x801E229C) //this is a jump label
/*801E229C 001DF09C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E22A0 001DF0A0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801E22A4 001DF0A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E22A8 001DF0A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*801E22AC 001DF0AC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E1D10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E22B0 001DF0B0*/ PPC::Runtime::ASM::xoris(context->r0, context->r31, 0x8000);
/*801E22B4 001DF0B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E22B8 001DF0B8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E22BC 001DF0BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801E22C0 001DF0C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801E22C4 001DF0C4*/ PPC::Runtime::ASM::bge(.L_801E22CC);
/*801E22C8 001DF0C8*/ PPC::Runtime::ASM::b(.L_801E22D8);
RUNTIME_PPC_JUMP_LABEL(.L_801E22CC, 0x801E22CC) //this is a jump label
/*801E22CC 001DF0CC*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f31);
/*801E22D0 001DF0D0*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E22D4 001DF0D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801E22D8, 0x801E22D8) //this is a jump label
/*801E22D8 001DF0D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xba8, context->r30));
/*801E22DC 001DF0DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801E22E0 001DF0E0*/ PPC::Runtime::ASM::bne(.L_801E22F4);
/*801E22E4 001DF0E4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E22E8 001DF0E8*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*801E22EC 001DF0EC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801E22F0 001DF0F0*/ PPC::Runtime::ASM::bl(fn_801D5CA0);
RUNTIME_PPC_JUMP_LABEL(.L_801E22F4, 0x801E22F4) //this is a jump label
/*801E22F4 001DF0F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xba8, context->r30));
/*801E22F8 001DF0F8*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*801E22FC 001DF0FC*/ PPC::Runtime::ASM::ble(.L_801E2304);
/*801E2300 001DF100*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xba8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801E2304, 0x801E2304) //this is a jump label
/*801E2304 001DF104*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801E2308 001DF108*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801E230C 001DF10C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E2310 001DF110*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E2314 001DF114*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E2318 001DF118*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E231C 001DF11C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801E2320 001DF120*/ PPC::Runtime::ASM::blr();
}