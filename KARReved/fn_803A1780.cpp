//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803A1780(PPC::Runtime::GCContext* context)
{
/*803A1780 0039E580*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803A1784 0039E584*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A1788 0039E588*/ PPC::Runtime::ASM::mr(context->r8, context->r4);
/*803A178C 0039E58C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A1790 0039E590*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803A1794 0039E594*/ PPC::Runtime::ASM::li(context->r6, 0x280);
/*803A1798 0039E598*/ PPC::Runtime::ASM::li(context->r0, 0x1e0);
/*803A179C 0039E59C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803A17A0 0039E5A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803A17A4 0039E5A4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803A17A8 0039E5A8*/ PPC::Runtime::ASM::mr(context->r3, context->r8);
/*803A17AC 0039E5AC*/ PPC::Runtime::ASM::li(context->r7, 0x1e0);
/*803A17B0 0039E5B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*803A17B4 0039E5B4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*803A17B8 0039E5B8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A17BC 0039E5BC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*803A17C0 0039E5C0*/ PPC::Runtime::ASM::li(context->r6, 0x280);
/*803A17C4 0039E5C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*803A17C8 0039E5C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803A17CC 0039E5CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803A17D0 0039E5D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A17D4 0039E5D4*/ PPC::Runtime::ASM::bctrl();
/*803A17D8 0039E5D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*803A17DC 0039E5DC*/ PPC::Runtime::ASM::lis(context->r5, 0x4330);
/*803A17E0 0039E5E0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*803A17E4 0039E5E4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A17E8 0039E5E8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803A17EC 0039E5EC*/ PPC::Runtime::ASM::subf(context->r3, context->r3, context->r0);
/*803A17F0 0039E5F0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5080 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A17F4 0039E5F4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A17F8 0039E5F8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*803A17FC 0039E5FC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xe);
/*803A1800 0039E600*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*803A1804 0039E604*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A1808 0039E608*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A180C 0039E60C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*803A1810 0039E610*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f3);
/*803A1814 0039E614*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*803A1818 0039E618*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A181C 0039E61C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A1820 0039E620*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x7);
/*803A1824 0039E624*/ PPC::Runtime::ASM::bge(.L_803A1850);
/*803A1828 0039E628*/ PPC::Runtime::ASM::xoris(context->r0, context->r4, 0x8000);
/*803A182C 0039E62C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A1830 0039E630*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1834 0039E634*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A1838 0039E638*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A183C 0039E63C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*803A1840 0039E640*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f3, context->f0);
/*803A1844 0039E644*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*803A1848 0039E648*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803A184C 0039E64C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803A1850, 0x803A1850) //this is a jump label
/*803A1850 0039E650*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*803A1854 0039E654*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*803A1858 0039E658*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r31));
/*803A185C 0039E65C*/ PPC::Runtime::ASM::mr(context->r6, context->r4);
/*803A1860 0039E660*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*803A1864 0039E664*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*803A1868 0039E668*/ PPC::Runtime::ASM::mr(context->r7, context->r5);
/*803A186C 0039E66C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A1870 0039E670*/ PPC::Runtime::ASM::bctrl();
/*803A1874 0039E674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803A1878 0039E678*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803A187C 0039E67C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A1880 0039E680*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803A1884 0039E684*/ PPC::Runtime::ASM::blr();
}