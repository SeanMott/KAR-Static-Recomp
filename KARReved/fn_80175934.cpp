//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138C90.hpp"
#include "fn_80138C90.hpp"
#include "fn_80138C90.hpp"



void fn_80175934(PPC::Runtime::GCContext* context)
{
/*80175934 00172734*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80175938 00172738*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017593C 0017273C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80175940 00172740*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80175944 00172744*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80175948 00172748*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017594C 0017274C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80175950 00172750*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80175954 00172754*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80175958 00172758*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017595C 0017275C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd8, context->r3));
/*80175960 00172760*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80175964 00172764*/ PPC::Runtime::ASM::beq(.L_801759B8);
/*80175968 00172768*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8017596C 0017276C*/ PPC::Runtime::ASM::extsb(context->r30, context->r28);
/*80175970 00172770*/ PPC::Runtime::ASM::mulli(context->r31, context->r0, 0x78);
/*80175974 00172774*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80175978 00172778*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017597C 0017277C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80175980 00172780*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r31);
/*80175984 00172784*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*80175988 00172788*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8017598C 0017278C*/ PPC::Runtime::ASM::bl(fn_80138C90);
/*80175990 00172790*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r31);
/*80175994 00172794*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80175998 00172798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8017599C 0017279C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801759A0 001727A0*/ PPC::Runtime::ASM::bl(fn_80138C90);
/*801759A4 001727A4*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r31);
/*801759A8 001727A8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801759AC 001727AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801759B0 001727B0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801759B4 001727B4*/ PPC::Runtime::ASM::bl(fn_80138C90);
RUNTIME_PPC_JUMP_LABEL(.L_801759B8, 0x801759B8) //this is a jump label
/*801759B8 001727B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801759BC 001727BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801759C0 001727C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801759C4 001727C4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801759C8 001727C8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801759CC 001727CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801759D0 001727D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801759D4 001727D4*/ PPC::Runtime::ASM::blr();
}