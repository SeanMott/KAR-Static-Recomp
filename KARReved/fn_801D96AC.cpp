//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CC680.hpp"
#include "fn_801D3AF4.hpp"



void fn_801D96AC(PPC::Runtime::GCContext* context)
{
/*801D96AC 001D64AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801D96B0 001D64B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D96B4 001D64B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D96B8 001D64B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801D96BC 001D64BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D96C0 001D64C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r3));
/*801D96C4 001D64C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801D96C8 001D64C8*/ PPC::Runtime::ASM::beq(.L_801D97BC);
/*801D96CC 001D64CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D96D0 001D64D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c0, context->r31));
/*801D96D4 001D64D4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801D96D8 001D64D8*/ PPC::Runtime::ASM::bne(.L_801D9710);
/*801D96DC 001D64DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c4, context->r31));
/*801D96E0 001D64E0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801D96E4 001D64E4*/ PPC::Runtime::ASM::bne(.L_801D9710);
/*801D96E8 001D64E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c8, context->r31));
/*801D96EC 001D64EC*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801D96F0 001D64F0*/ PPC::Runtime::ASM::bne(.L_801D9710);
/*801D96F4 001D64F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x418, context->r31));
/*801D96F8 001D64F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x41c, context->r31));
/*801D96FC 001D64FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x420, context->r31));
/*801D9700 001D6500*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D9704 001D6504*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D9708 001D6508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D970C 001D650C*/ PPC::Runtime::ASM::b(.L_801D9728);
RUNTIME_PPC_JUMP_LABEL(.L_801D9710, 0x801D9710) //this is a jump label
/*801D9710 001D6510*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c0, context->r31));
/*801D9714 001D6514*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c4, context->r31));
/*801D9718 001D6518*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c8, context->r31));
/*801D971C 001D651C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D9720 001D6520*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D9724 001D6524*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801D9728, 0x801D9728) //this is a jump label
/*801D9728 001D6528*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7bc, context->r31));
/*801D972C 001D652C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801D9730 001D6530*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D9734 001D6534*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D9738 001D6538*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D973C 001D653C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f0, context->f4);
/*801D9740 001D6540*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D9744 001D6544*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f4);
/*801D9748 001D6548*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f4);
/*801D974C 001D654C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D9750 001D6550*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D9754 001D6554*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D9758 001D6558*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D975C 001D655C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D9760 001D6560*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d0, context->r31));
/*801D9764 001D6564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D9768 001D6568*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d4, context->r31));
/*801D976C 001D656C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d8, context->r31));
/*801D9770 001D6570*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801D9774 001D6574*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f3);
/*801D9778 001D6578*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801D977C 001D657C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801D9780 001D6580*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f2);
/*801D9784 001D6584*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801D9788 001D6588*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801D978C 001D658C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*801D9790 001D6590*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801D9794 001D6594*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r31));
/*801D9798 001D6598*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*801D979C 001D659C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r31));
/*801D97A0 001D65A0*/ PPC::Runtime::ASM::bl(fn_801CC680);
/*801D97A4 001D65A4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D97A8 001D65A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D97AC 001D65AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*801D97B0 001D65B0*/ PPC::Runtime::ASM::bl(fn_801D3AF4);
/*801D97B4 001D65B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7bc, context->r31));
/*801D97B8 001D65B8*/ PPC::Runtime::ASM::b(.L_801D97C0);
RUNTIME_PPC_JUMP_LABEL(.L_801D97BC, 0x801D97BC) //this is a jump label
/*801D97BC 001D65BC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_801D97C0, 0x801D97C0) //this is a jump label
/*801D97C0 001D65C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D97C4 001D65C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801D97C8 001D65C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D97CC 001D65CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801D97D0 001D65D0*/ PPC::Runtime::ASM::blr();
}