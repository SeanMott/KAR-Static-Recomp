//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80341F90.hpp"
#include "fn_80289768.hpp"



void fn_80323C58(PPC::Runtime::GCContext* context)
{
/*80323C58 00320A58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80323C5C 00320A5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80323C60 00320A60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80323C64 00320A64*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80323C68 00320A68*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80323C6C 00320A6C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80323C70 00320A70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80323C74 00320A74*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80323C78 00320A78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80323C7C 00320A7C*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80323C80 00320A80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80323C84 00320A84*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*80323C88 00320A88*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80323C8C 00320A8C*/ PPC::Runtime::ASM::bl(fn_80341F90);
/*80323C90 00320A90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80323C94 00320A94*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f31);
/*80323C98 00320A98*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*80323C9C 00320A9C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80323CA0 00320AA0*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80323CA4 00320AA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80323CA8 00320AA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80323CAC 00320AAC*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*80323CB0 00320AB0*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80323CB4 00320AB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80323CB8 00320AB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4008 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80323CBC 00320ABC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80323CC0 00320AC0*/ PPC::Runtime::ASM::bl(fn_80289768);
/*80323CC4 00320AC4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x30);
/*80323CC8 00320AC8*/ PPC::Runtime::ASM::bl(fn_80384A80);
/*80323CCC 00320ACC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80323CD0 00320AD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80323CD4 00320AD4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80323CD8 00320AD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80323CDC 00320ADC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80323CE0 00320AE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80323CE4 00320AE4*/ PPC::Runtime::ASM::blr();
}