//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CA968.hpp"
#include "fn_800CEA80.hpp"



void fn_801D87F8(PPC::Runtime::GCContext* context)
{
/*801D87F8 001D55F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801D87FC 001D55FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D8800 001D5600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D8804 001D5604*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801D8808 001D5608*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801D880C 001D560C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D8810 001D5610*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D8814 001D5614*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801D8818 001D5618*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801D881C 001D561C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801D8820 001D5620*/ PPC::Runtime::ASM::bl(fn_801CA968);
/*801D8824 001D5624*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801D8828 001D5628*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801D882C 001D562C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8830 001D5630*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801D8834 001D5634*/ PPC::Runtime::ASM::ble(.L_801D88B4);
/*801D8838 001D5638*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801D883C 001D563C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D8840 001D5640*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801D8844 001D5644*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801D8848 001D5648*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D884C 001D564C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801D8850 001D5650*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D8854 001D5654*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*801D8858 001D5658*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f3, context->f0);
/*801D885C 001D565C*/ PPC::Runtime::ASM::fneg(context->f31, context->f0);
/*801D8860 001D5660*/ PPC::Runtime::ASM::bl(fn_800CEA80);
/*801D8864 001D5664*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f0, context->r30));
/*801D8868 001D5668*/ PPC::Runtime::ASM::fabs(context->f3, context->f31);
/*801D886C 001D566C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8870 001D5670*/ PPC::Runtime::ASM::fmuls(context->f2, context->f31, context->f31);
/*801D8874 001D5674*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*801D8878 001D5678*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801D887C 001D567C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*801D8880 001D5680*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*801D8884 001D5684*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*801D8888 001D5688*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f3);
/*801D888C 001D568C*/ PPC::Runtime::ASM::ble(.L_801D8894);
/*801D8890 001D5690*/ PPC::Runtime::ASM::fmr(context->f1, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_801D8894, 0x801D8894) //this is a jump label
/*801D8894 001D5694*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x840, context->r30));
/*801D8898 001D5698*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D889C 001D569C*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f1);
/*801D88A0 001D56A0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801D88A4 001D56A4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x840, context->r30));
/*801D88A8 001D56A8*/ PPC::Runtime::ASM::ble(.L_801D88B8);
/*801D88AC 001D56AC*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*801D88B0 001D56B0*/ PPC::Runtime::ASM::b(.L_801D88B8);
RUNTIME_PPC_JUMP_LABEL(.L_801D88B4, 0x801D88B4) //this is a jump label
/*801D88B4 001D56B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_801D88B8, 0x801D88B8) //this is a jump label
/*801D88B8 001D56B8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801D88BC 001D56BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D88C0 001D56C0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801D88C4 001D56C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D88C8 001D56C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D88CC 001D56CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D88D0 001D56D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801D88D4 001D56D4*/ PPC::Runtime::ASM::blr();
}