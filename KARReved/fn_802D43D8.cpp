//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"



void fn_802D43D8(PPC::Runtime::GCContext* context)
{
/*802D43D8 002D11D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802D43DC 002D11DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D43E0 002D11E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802D43E4 002D11E4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802D43E8 002D11E8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802D43EC 002D11EC*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D43F0 002D11F0*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*802D43F4 002D11F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D43F8 002D11F8*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802D43FC 002D11FC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4400 002D1200*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802D4404 002D1204*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D4408 002D1208*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802D440C 002D120C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4410 002D1210*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D4414 002D1214*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802D4418 002D1218*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D441C 002D121C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D4420 002D1220*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*802D4424 002D1224*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E372C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4428 002D1228*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802D442C 002D122C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802D4430 002D1230*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*802D4434 002D1234*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802D4438 002D1238*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802D443C 002D123C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802D4440 002D1240*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*802D4444 002D1244*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D4448 002D1248*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802D444C 002D124C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D4450 002D1250*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D4454 002D1254*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802D4458 002D1258*/ PPC::Runtime::ASM::blr();
}