//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80391D14(PPC::Runtime::GCContext* context)
{
/*80391D14 0038EB14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80391D18 0038EB18*/ PPC::Runtime::ASM::mflr(context->r0);
/*80391D1C 0038EB1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80391D20 0038EB20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80391D24 0038EB24*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80391D28 0038EB28*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80391D2C 0038EB2C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80391D30 0038EB30*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80391D34 0038EB34*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80391D38 0038EB38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80391D3C 0038EB3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*80391D40 0038EB40*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80391D44 0038EB44*/ PPC::Runtime::ASM::bctrl();
/*80391D48 0038EB48*/ PPC::Runtime::ASM::bl(fn_GXInvalidateVtxCache);
/*80391D4C 0038EB4C*/ PPC::Runtime::ASM::bl(fn_GXClearVtxDesc);
/*80391D50 0038EB50*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80391D54 0038EB54*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*80391D58 0038EB58*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80391D5C 0038EB5C*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80391D60 0038EB60*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80391D64 0038EB64*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*80391D68 0038EB68*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*80391D6C 0038EB6C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80391D70 0038EB70*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*80391D74 0038EB74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80391D78 0038EB78*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*80391D7C 0038EB7C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80391D80 0038EB80*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80391D84 0038EB84*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80391D88 0038EB88*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*80391D8C 0038EB8C*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*80391D90 0038EB90*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80391D94 0038EB94*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*80391D98 0038EB98*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*80391D9C 0038EB9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80391DA0 0038EBA0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80391DA4 0038EBA4*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*80391DA8 0038EBA8*/ PPC::Runtime::ASM::lis(context->r6, 0x4330);
/*80391DAC 0038EBAC*/ PPC::Runtime::ASM::xoris(context->r7, context->r30, 0x8000);
/*80391DB0 0038EBB0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80391DB4 0038EBB4*/ PPC::Runtime::ASM::xoris(context->r4, context->r31, 0x8000);
/*80391DB8 0038EBB8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80391DBC 0038EBBC*/ PPC::Runtime::ASM::lis(context->r5, 0xcc01);
/*80391DC0 0038EBC0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80391DC4 0038EBC4*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E4EC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80391DC8 0038EBC8*/ PPC::Runtime::ASM::add(context->r0, context->r30, context->r0);
/*80391DCC 0038EBCC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80391DD0 0038EBD0*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*80391DD4 0038EBD4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80391DD8 0038EBD8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f4);
/*80391DDC 0038EBDC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r29));
/*80391DE0 0038EBE0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80391DE4 0038EBE4*/ PPC::Runtime::ASM::add(context->r0, context->r31, context->r0);
/*80391DE8 0038EBE8*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4EC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80391DEC 0038EBEC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80391DF0 0038EBF0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391DF4 0038EBF4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80391DF8 0038EBF8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f4);
/*80391DFC 0038EBFC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4EC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80391E00 0038EC00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80391E04 0038EC04*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80391E08 0038EC08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E0C 0038EC0C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80391E10 0038EC10*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E14 0038EC14*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f4);
/*80391E18 0038EC18*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E1C 0038EC1C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80391E20 0038EC20*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80391E24 0038EC24*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80391E28 0038EC28*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E2C 0038EC2C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f4);
/*80391E30 0038EC30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80391E34 0038EC34*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80391E38 0038EC38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E3C 0038EC3C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80391E40 0038EC40*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E44 0038EC44*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f4);
/*80391E48 0038EC48*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E4C 0038EC4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80391E50 0038EC50*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80391E54 0038EC54*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80391E58 0038EC58*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E5C 0038EC5C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f4);
/*80391E60 0038EC60*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80391E64 0038EC64*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80391E68 0038EC68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E6C 0038EC6C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80391E70 0038EC70*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E74 0038EC74*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f4);
/*80391E78 0038EC78*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E7C 0038EC7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80391E80 0038EC80*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80391E84 0038EC84*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80391E88 0038EC88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E8C 0038EC8C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f4);
/*80391E90 0038EC90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E94 0038EC94*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E98 0038EC98*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*80391E9C 0038EC9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80391EA0 0038ECA0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80391EA4 0038ECA4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80391EA8 0038ECA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80391EAC 0038ECAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80391EB0 0038ECB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80391EB4 0038ECB4*/ PPC::Runtime::ASM::blr();
}