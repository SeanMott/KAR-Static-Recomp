//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802A07D8.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802A07D8.hpp"
#include "fn_802889D0.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802A07D8.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802A07D8.hpp"
#include "fn_802889D0.hpp"
#include "fn_802889D0.hpp"



void fn_802DA9F8(PPC::Runtime::GCContext* context)
{
/*802DA9F8 002D77F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*802DA9FC 002D77FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802DAA00 002D7800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802DAA04 002D7804*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802DAA08 002D7808*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802DAA0C 002D780C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802DAA10 002D7810*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802DAA14 002D7814*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802DAA18 002D7818*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802DAA1C 002D781C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802DAA20 002D7820*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802DAA24 002D7824*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802DAA28 002D7828*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAA2C 002D782C*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*802DAA30 002D7830*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802DAA34 002D7834*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802DAA38 002D7838*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAA3C 002D783C*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802DAA40 002D7840*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAA44 002D7844*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAA48 002D7848*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*802DAA4C 002D784C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAA50 002D7850*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAA54 002D7854*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*802DAA58 002D7858*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAA5C 002D785C*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802DAA60 002D7860*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802DAA64 002D7864*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802DAA68 002D7868*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802DAA6C 002D786C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802DAA70 002D7870*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802DAA74 002D7874*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*802DAA78 002D7878*/ PPC::Runtime::ASM::bl(fn_802A07D8);
/*802DAA7C 002D787C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802DAA80 002D7880*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAA84 002D7884*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAA88 002D7888*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802DAA8C 002D788C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAA90 002D7890*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAA94 002D7894*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*802DAA98 002D7898*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAA9C 002D789C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAAA0 002D78A0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*802DAAA4 002D78A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAAA8 002D78A8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x3c);
/*802DAAAC 002D78AC*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802DAAB0 002D78B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802DAAB4 002D78B4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x30);
/*802DAAB8 002D78B8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802DAABC 002D78BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802DAAC0 002D78C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802DAAC4 002D78C4*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*802DAAC8 002D78C8*/ PPC::Runtime::ASM::bl(fn_802A07D8);
/*802DAACC 002D78CC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802DAAD0 002D78D0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802DAAD4 002D78D4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802DAAD8 002D78D8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*802DAADC 002D78DC*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802DAAE0 002D78E0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802DAAE4 002D78E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAAE8 002D78E8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAAEC 002D78EC*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802DAAF0 002D78F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAAF4 002D78F4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAAF8 002D78F8*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*802DAAFC 002D78FC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAB00 002D7900*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAB04 002D7904*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*802DAB08 002D7908*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAB0C 002D790C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x78);
/*802DAB10 002D7910*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802DAB14 002D7914*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802DAB18 002D7918*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*802DAB1C 002D791C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802DAB20 002D7920*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802DAB24 002D7924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802DAB28 002D7928*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*802DAB2C 002D792C*/ PPC::Runtime::ASM::bl(fn_802A07D8);
/*802DAB30 002D7930*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802DAB34 002D7934*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAB38 002D7938*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAB3C 002D793C*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802DAB40 002D7940*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAB44 002D7944*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAB48 002D7948*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*802DAB4C 002D794C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAB50 002D7950*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DAB54 002D7954*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*802DAB58 002D7958*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DAB5C 002D795C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xb4);
/*802DAB60 002D7960*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802DAB64 002D7964*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802DAB68 002D7968*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802DAB6C 002D796C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802DAB70 002D7970*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802DAB74 002D7974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DAB78 002D7978*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*802DAB7C 002D797C*/ PPC::Runtime::ASM::bl(fn_802A07D8);
/*802DAB80 002D7980*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802DAB84 002D7984*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802DAB88 002D7988*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*802DAB8C 002D798C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802DAB90 002D7990*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802DAB94 002D7994*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802DAB98 002D7998*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802DAB9C 002D799C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
/*802DABA0 002D79A0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*802DABA4 002D79A4*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802DABA8 002D79A8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802DABAC 002D79AC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802DABB0 002D79B0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802DABB4 002D79B4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802DABB8 002D79B8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802DABBC 002D79BC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802DABC0 002D79C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802DABC4 002D79C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802DABC8 002D79C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802DABCC 002D79CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802DABD0 002D79D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*802DABD4 002D79D4*/ PPC::Runtime::ASM::blr();
}