//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803828A4(PPC::Runtime::GCContext* context)
{
/*803828A4 0037F6A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xb0, context->r1));
/*803828A8 0037F6A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803828AC 0037F6AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*803828B0 0037F6B0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803828B4 0037F6B4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*803828B8 0037F6B8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803828BC 0037F6BC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*803828C0 0037F6C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*803828C4 0037F6C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*803828C8 0037F6C8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803828CC 0037F6CC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803828D0 0037F6D0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803828D4 0037F6D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*803828D8 0037F6D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803828DC 0037F6DC*/ PPC::Runtime::ASM::beq(.L_80382B14);
/*803828E0 0037F6E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803828E4 0037F6E4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetCurrent?);
/*803828E8 0037F6E8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803828EC 0037F6EC*/ PPC::Runtime::ASM::beq(.L_80382B14);
/*803828F0 0037F6F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803828F4 0037F6F4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_64 @ Get_MemoryOffset_HighBit);
/*803828F8 0037F6F8*/ PPC::Runtime::ASM::addi(context->r6, context->r3, MemoryOffset_64 @ Get_MemoryOffset_LowBit);
/*803828FC 0037F6FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80382900 0037F700*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80382904 0037F704*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*80382908 0037F708*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8038290C 0037F70C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80382910 0037F710*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80382914 0037F714*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80382918 0037F718*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8038291C 0037F71C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80382920 0037F720*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80382924 0037F724*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80382928 0037F728*/ PPC::Runtime::ASM::beq(.L_80382AE8);
/*8038292C 0037F72C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80382930 0037F730*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80382934 0037F734*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80382938 0037F738*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8038293C 0037F73C*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80382940 0037F740*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f5);
/*80382944 0037F744*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4D30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80382948 0037F748*/ PPC::Runtime::ASM::fsubs(context->f3, context->f0, context->f6);
/*8038294C 0037F74C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4D34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80382950 0037F750*/ PPC::Runtime::ASM::fdivs(context->f30, context->f4, context->f1);
/*80382954 0037F754*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4D18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80382958 0037F758*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4D1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038295C 0037F75C*/ PPC::Runtime::ASM::fdivs(context->f31, context->f3, context->f2);
/*80382960 0037F760*/ PPC::Runtime::ASM::fmadds(context->f3, context->f0, context->f30, context->f5);
/*80382964 0037F764*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f31, context->f6);
/*80382968 0037F768*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8038296C 0037F76C*/ PPC::Runtime::ASM::fctiwz(context->f3, context->f3);
/*80382970 0037F770*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80382974 0037F774*/ PPC::Runtime::ASM::stfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80382978 0037F778*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8038297C 0037F77C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80382980 0037F780*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80382984 0037F784*/ PPC::Runtime::ASM::bl(fn_80438C50);
/*80382988 0037F788*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038298C 0037F78C*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*80382990 0037F790*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80382994 0037F794*/ PPC::Runtime::ASM::bl(fn_GXSetZMode);
/*80382998 0037F798*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*8038299C 0037F79C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803829A0 0037F7A0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*803829A4 0037F7A4*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*803829A8 0037F7A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4D30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803829AC 0037F7AC*/ PPC::Runtime::ASM::lis(context->r9, 0x4330);
/*803829B0 0037F7B0*/ PPC::Runtime::ASM::xoris(context->r10, context->r29, 0x8000);
/*803829B4 0037F7B4*/ PPC::Runtime::ASM::neg(context->r0, context->r28);
/*803829B8 0037F7B8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f30);
/*803829BC 0037F7BC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803829C0 0037F7C0*/ PPC::Runtime::ASM::xoris(context->r7, context->r0, 0x8000);
/*803829C4 0037F7C4*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E4D20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803829C8 0037F7C8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803829CC 0037F7CC*/ PPC::Runtime::ASM::lis(context->r8, 0xcc01);
/*803829D0 0037F7D0*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803829D4 0037F7D4*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*803829D8 0037F7D8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803829DC 0037F7DC*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*803829E0 0037F7E0*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803829E4 0037F7E4*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803829E8 0037F7E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4D34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803829EC 0037F7EC*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803829F0 0037F7F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803829F4 0037F7F4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f31);
/*803829F8 0037F7F8*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803829FC 0037F7FC*/ PPC::Runtime::ASM::add(context->r0, context->r29, context->r0);
/*80382A00 0037F800*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A04 0037F804*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*80382A08 0037F808*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*80382A0C 0037F80C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80382A10 0037F810*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*80382A14 0037F814*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80382A18 0037F818*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80382A1C 0037F81C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A20 0037F820*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A24 0037F824*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A28 0037F828*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80382A2C 0037F82C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80382A30 0037F830*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80382A34 0037F834*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80382A38 0037F838*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A3C 0037F83C*/ PPC::Runtime::ASM::add(context->r0, context->r28, context->r0);
/*80382A40 0037F840*/ PPC::Runtime::ASM::neg(context->r0, context->r0);
/*80382A44 0037F844*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*80382A48 0037F848*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80382A4C 0037F84C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A50 0037F850*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80382A54 0037F854*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80382A58 0037F858*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80382A5C 0037F85C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A60 0037F860*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*80382A64 0037F864*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80382A68 0037F868*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A6C 0037F86C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A70 0037F870*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80382A74 0037F874*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A78 0037F878*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80382A7C 0037F87C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A80 0037F880*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*80382A84 0037F884*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A88 0037F888*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80382A8C 0037F88C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80382A90 0037F890*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80382A94 0037F894*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382A98 0037F898*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*80382A9C 0037F89C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80382AA0 0037F8A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382AA4 0037F8A4*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382AA8 0037F8A8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80382AAC 0037F8AC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382AB0 0037F8B0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80382AB4 0037F8B4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382AB8 0037F8B8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*80382ABC 0037F8BC*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382AC0 0037F8C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80382AC4 0037F8C4*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80382AC8 0037F8C8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80382ACC 0037F8CC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382AD0 0037F8D0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*80382AD4 0037F8D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382AD8 0037F8D8*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382ADC 0037F8DC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382AE0 0037F8E0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
/*80382AE4 0037F8E4*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r8));
RUNTIME_PPC_JUMP_LABEL(.L_80382AE8, 0x80382AE8) //this is a jump label
/*80382AE8 0037F8E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80382AEC 0037F8EC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4D1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80382AF0 0037F8F0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80382AF4 0037F8F4*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80382AF8 0037F8F8*/ PPC::Runtime::ASM::bne(.L_80382B10);
/*80382AFC 0037F8FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r30));
/*80382B00 0037F900*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80382B04 0037F904*/ PPC::Runtime::ASM::bne(.L_80382B10);
/*80382B08 0037F908*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80382B0C 0037F90C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80382B10, 0x80382B10) //this is a jump label
/*80382B10 0037F910*/ PPC::Runtime::ASM::bl(fn_HSD_CObjEndCurrent);
RUNTIME_PPC_JUMP_LABEL(.L_80382B14, 0x80382B14) //this is a jump label
/*80382B14 0037F914*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*80382B18 0037F918*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*80382B1C 0037F91C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*80382B20 0037F920*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80382B24 0037F924*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*80382B28 0037F928*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*80382B2C 0037F92C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*80382B30 0037F930*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*80382B34 0037F934*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80382B38 0037F938*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80382B3C 0037F93C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xb0);
/*80382B40 0037F940*/ PPC::Runtime::ASM::blr();
}