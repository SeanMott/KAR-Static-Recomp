//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ChangeFace.hpp"
#include "fn_ChangeFace.hpp"
#include "fn_ChangeFace.hpp"



void fn_801BE1DC(PPC::Runtime::GCContext* context)
{
/*801BE1DC 001BAFDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BE1E0 001BAFE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BE1E4 001BAFE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BE1E8 001BAFE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BE1EC 001BAFEC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BE1F0 001BAFF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r3));
/*801BE1F4 001BAFF4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BE1F8 001BAFF8*/ PPC::Runtime::ASM::beq(.L_801BE204);
/*801BE1FC 001BAFFC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801BE200 001BB000*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801BE204, 0x801BE204) //this is a jump label
/*801BE204 001BB004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/*801BE208 001BB008*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801BE20C 001BB00C*/ PPC::Runtime::ASM::bgt(.L_801BE330);
/*801BE210 001BB010*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r31));
/*801BE214 001BB014*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BE218 001BB018*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801BE21C 001BB01C*/ PPC::Runtime::ASM::bge(.L_801BE228);
/*801BE220 001BB020*/ PPC::Runtime::ASM::fneg(context->f1, context->f2);
/*801BE224 001BB024*/ PPC::Runtime::ASM::b(.L_801BE22C);
RUNTIME_PPC_JUMP_LABEL(.L_801BE228, 0x801BE228) //this is a jump label
/*801BE228 001BB028*/ PPC::Runtime::ASM::fmr(context->f1, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_801BE22C, 0x801BE22C) //this is a jump label
/*801BE22C 001BB02C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1824 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BE230 001BB030*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801BE234 001BB034*/ PPC::Runtime::ASM::ble(.L_801BE2E4);
/*801BE238 001BB038*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E1828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BE23C 001BB03C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801BE240 001BB040*/ PPC::Runtime::ASM::bge(.L_801BE294);
/*801BE244 001BB044*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x91c, context->r31));
/*801BE248 001BB048*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*801BE24C 001BB04C*/ PPC::Runtime::ASM::beq(.L_801BE330);
/*801BE250 001BB050*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*801BE254 001BB054*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*801BE258 001BB058*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/*801BE25C 001BB05C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801BE260 001BB060*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BE264 001BB064*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801BE268 001BB068*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x91c, context->r31));
/*801BE26C 001BB06C*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*801BE270 001BB070*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE274 001BB074*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 0, 31, 31);
/*801BE278 001BB078*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE27C 001BB07C*/ PPC::Runtime::ASM::bl(fn_ChangeFace);
/*801BE280 001BB080*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE284 001BB084*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801BE288 001BB088*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801BE28C 001BB08C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE290 001BB090*/ PPC::Runtime::ASM::b(.L_801BE330);
RUNTIME_PPC_JUMP_LABEL(.L_801BE294, 0x801BE294) //this is a jump label
/*801BE294 001BB094*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x91c, context->r31));
/*801BE298 001BB098*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801BE29C 001BB09C*/ PPC::Runtime::ASM::beq(.L_801BE330);
/*801BE2A0 001BB0A0*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*801BE2A4 001BB0A4*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*801BE2A8 001BB0A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/*801BE2AC 001BB0AC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801BE2B0 001BB0B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BE2B4 001BB0B4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801BE2B8 001BB0B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x91c, context->r31));
/*801BE2BC 001BB0BC*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*801BE2C0 001BB0C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE2C4 001BB0C4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 0, 31, 31);
/*801BE2C8 001BB0C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE2CC 001BB0CC*/ PPC::Runtime::ASM::bl(fn_ChangeFace);
/*801BE2D0 001BB0D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE2D4 001BB0D4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801BE2D8 001BB0D8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801BE2DC 001BB0DC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE2E0 001BB0E0*/ PPC::Runtime::ASM::b(.L_801BE330);
RUNTIME_PPC_JUMP_LABEL(.L_801BE2E4, 0x801BE2E4) //this is a jump label
/*801BE2E4 001BB0E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x91c, context->r31));
/*801BE2E8 001BB0E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801BE2EC 001BB0EC*/ PPC::Runtime::ASM::beq(.L_801BE330);
/*801BE2F0 001BB0F0*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*801BE2F4 001BB0F4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801BE2F8 001BB0F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/*801BE2FC 001BB0FC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801BE300 001BB100*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BE304 001BB104*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801BE308 001BB108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x91c, context->r31));
/*801BE30C 001BB10C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801BE310 001BB110*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE314 001BB114*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 0, 31, 31);
/*801BE318 001BB118*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE31C 001BB11C*/ PPC::Runtime::ASM::bl(fn_ChangeFace);
/*801BE320 001BB120*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801BE324 001BB124*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801BE328 001BB128*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801BE32C 001BB12C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801BE330, 0x801BE330) //this is a jump label
/*801BE330 001BB130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BE334 001BB134*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BE338 001BB138*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BE33C 001BB13C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BE340 001BB140*/ PPC::Runtime::ASM::blr();
}