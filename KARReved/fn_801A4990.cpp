//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0D7C.hpp"
#include "fn_80190E2C.hpp"
#include "fn_80236C40.hpp"
#include "fn_80195588.hpp"
#include "fn_801A4B94.hpp"
#include "fn_801A4BB0.hpp"
#include "fn_801A4B94.hpp"
#include "fn_801A4BB0.hpp"



void fn_801A4990(PPC::Runtime::GCContext* context)
{
/*801A4990 001A1790*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801A4994 001A1794*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A4998 001A1798*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A499C 001A179C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A49A0 001A17A0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801A49A4 001A17A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A49A8 001A17A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A49AC 001A17AC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801A49B0 001A17B0*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A49B4 001A17B4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801A49B8 001A17B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15c, context->r5));
/*801A49BC 001A17BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*801A49C0 001A17C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801A49C4 001A17C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r5));
/*801A49C8 001A17C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r3));
/*801A49CC 001A17CC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f0);
/*801A49D0 001A17D0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 4);
/*801A49D4 001A17D4*/ PPC::Runtime::ASM::lwzx(context->r31, context->r4, context->r0);
/*801A49D8 001A17D8*/ PPC::Runtime::ASM::bl(fn_801A0D7C);
/*801A49DC 001A17DC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f1);
/*801A49E0 001A17E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A49E4 001A17E4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A49E8 001A17E8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801A49EC 001A17EC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801A49F0 001A17F0*/ PPC::Runtime::ASM::bl(fn_80190E2C);
/*801A49F4 001A17F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x368, context->r30));
/*801A49F8 001A17F8*/ PPC::Runtime::ASM::lis(context->r3, 0x4);
/*801A49FC 001A17FC*/ PPC::Runtime::ASM::mr(context->r7, context->r31);
/*801A4A00 001A1800*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*801A4A04 001A1804*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A4A08 001A1808*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x5656);
/*801A4A0C 001A180C*/ PPC::Runtime::ASM::li(context->r6, 0xd5);
/*801A4A10 001A1810*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801A4A14 001A1814*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r30));
/*801A4A18 001A1818*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801A4A1C 001A181C*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*801A4A20 001A1820*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4c, context->r30));
/*801A4A24 001A1824*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*801A4A28 001A1828*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E12E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A4A2C 001A182C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8a);
/*801A4A30 001A1830*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r30));
/*801A4A34 001A1834*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A4A38 001A1838*/ PPC::Runtime::ASM::bl(fn_80195588);
/*801A4A3C 001A183C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r30));
/*801A4A40 001A1840*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*801A4A44 001A1844*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 7, 24, 24);
/*801A4A48 001A1848*/ PPC::Runtime::ASM::lis(context->r4, fn_801A4B94 @ Get_MemoryOffset_HighBit);
/*801A4A4C 001A184C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r30));
/*801A4A50 001A1850*/ PPC::Runtime::ASM::lis(context->r3, fn_801A4BB0 @ Get_MemoryOffset_HighBit);
/*801A4A54 001A1854*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801A4B94 @ Get_MemoryOffset_LowBit);
/*801A4A58 001A1858*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r30));
/*801A4A5C 001A185C*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r6, 4, 27, 27);
/*801A4A60 001A1860*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801A4BB0 @ Get_MemoryOffset_LowBit);
/*801A4A64 001A1864*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r30));
/*801A4A68 001A1868*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e4, context->r30));
/*801A4A6C 001A186C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r30));
/*801A4A70 001A1870*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801A4A74 001A1874*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A4A78 001A1878*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A4A7C 001A187C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A4A80 001A1880*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A4A84 001A1884*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A4A88 001A1888*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801A4A8C 001A188C*/ PPC::Runtime::ASM::blr();
}