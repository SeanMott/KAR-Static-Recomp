//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80245F70.hpp"
#include "fn_802461EC.hpp"
#include "fn_800D364C.hpp"



void fn_801CE6D0(PPC::Runtime::GCContext* context)
{
/*801CE6D0 001CB4D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801CE6D4 001CB4D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CE6D8 001CB4D8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1A4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CE6DC 001CB4DC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801CE6E0 001CB4E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CE6E4 001CB4E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CE6E8 001CB4E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CE6EC 001CB4EC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x3e8);
/*801CE6F0 001CB4F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r3));
/*801CE6F4 001CB4F4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x43c);
/*801CE6F8 001CB4F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r31));
/*801CE6FC 001CB4FC*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x448);
/*801CE700 001CB500*/ PPC::Runtime::ASM::bl(fn_80245F70);
/*801CE704 001CB504*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CE708 001CB508*/ PPC::Runtime::ASM::bl(fn_802461EC);
/*801CE70C 001CB50C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r31));
/*801CE710 001CB510*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801CE714 001CB514*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4c, context->r31));
/*801CE718 001CB518*/ PPC::Runtime::ASM::bl(fn_800D364C);
/*801CE71C 001CB51C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e8, context->r31));
/*801CE720 001CB520*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801CE724 001CB524*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CE728 001CB528*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*801CE72C 001CB52C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r31));
/*801CE730 001CB530*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r31));
/*801CE734 001CB534*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r31));
/*801CE738 001CB538*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fc, context->r31));
/*801CE73C 001CB53C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CE740 001CB540*/ PPC::Runtime::ASM::fsubs(context->f1, context->f5, context->f4);
/*801CE744 001CB544*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*801CE748 001CB548*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36c, context->r31));
/*801CE74C 001CB54C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CE750 001CB550*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CE754 001CB554*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x370, context->r31));
/*801CE758 001CB558*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801CE75C 001CB55C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*801CE760 001CB560*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x374, context->r31));
/*801CE764 001CB564*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CE768 001CB568*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CE76C 001CB56C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CE770 001CB570*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801CE774 001CB574*/ PPC::Runtime::ASM::blr();
}