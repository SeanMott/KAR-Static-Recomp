//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn_80446820.hpp"
#include "fn_80445CF4.hpp"



void fn_804461CC(PPC::Runtime::GCContext* context)
{
/*804461CC 00442FCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804461D0 00442FD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*804461D4 00442FD4*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058ECA0 @ Get_MemoryOffset_HighBit);
/*804461D8 00442FD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804461DC 00442FDC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_8058ECA0 @ Get_MemoryOffset_LowBit);
/*804461E0 00442FE0*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*804461E4 00442FE4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804461E8 00442FE8*/ PPC::Runtime::ASM::bne(.L_804461F4);
/*804461EC 00442FEC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*804461F0 00442FF0*/ PPC::Runtime::ASM::b(.L_8044621C);
RUNTIME_PPC_JUMP_LABEL(.L_804461F4, 0x804461F4) //this is a jump label
/*804461F4 00442FF4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x40);
/*804461F8 00442FF8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*804461FC 00442FFC*/ PPC::Runtime::ASM::bne(.L_80446208);
/*80446200 00443000*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*80446204 00443004*/ PPC::Runtime::ASM::b(.L_8044621C);
RUNTIME_PPC_JUMP_LABEL(.L_80446208, 0x80446208) //this is a jump label
/*80446208 00443008*/ PPC::Runtime::ASM::lis(context->r3, lbl_80508BE0 @ Get_MemoryOffset_HighBit);
/*8044620C 0044300C*/ PPC::Runtime::ASM::li(context->r4, 0x163);
/*80446210 00443010*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80508BE0 @ Get_MemoryOffset_LowBit);
/*80446214 00443014*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_347 @ Get_MemoryOffset_SDA21);
/*80446218 00443018*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8044621C, 0x8044621C) //this is a jump label
/*8044621C 0044301C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80446220 00443020*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_15 @ Get_MemoryOffset_SDA21);
/*80446224 00443024*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r31);
/*80446228 00443028*/ PPC::Runtime::ASM::bl(fn_80446820);
/*8044622C 0044302C*/ PPC::Runtime::ASM::bl(fn_80445CF4);
/*80446230 00443030*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80446234 00443034*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80446238 00443038*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8044623C 0044303C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80446240 00443040*/ PPC::Runtime::ASM::blr();
}