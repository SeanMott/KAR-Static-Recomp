//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018C1C8.hpp"
#include "fn_8019600C.hpp"
#include "fn_8019600C.hpp"
#include "fn_8018C598.hpp"



void fn_80196170(PPC::Runtime::GCContext* context)
{
/*80196170 00192F70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80196174 00192F74*/ PPC::Runtime::ASM::mflr(context->r0);
/*80196178 00192F78*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8019617C 00192F7C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80196180 00192F80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80196184 00192F84*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80196188 00192F88*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019618C 00192F8C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80196190 00192F90*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80196194 00192F94*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80196198 00192F98*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8019619C 00192F9C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801961A0 00192FA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801961A4 00192FA4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*801961A8 00192FA8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*801961AC 00192FAC*/ PPC::Runtime::ASM::bl(fn_8018C1C8);
/*801961B0 00192FB0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r28));
/*801961B4 00192FB4*/ PPC::Runtime::ASM::lis(context->r4, fn_8019600C @ Get_MemoryOffset_HighBit);
/*801961B8 00192FB8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801961BC 00192FBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r28));
/*801961C0 00192FC0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_8019600C @ Get_MemoryOffset_LowBit);
/*801961C4 00192FC4*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
/*801961C8 00192FC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
/*801961CC 00192FCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*801961D0 00192FD0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801961D4 00192FD4*/ PPC::Runtime::ASM::b(.L_80196208);
RUNTIME_PPC_JUMP_LABEL(.L_801961D8, 0x801961D8) //this is a jump label
/*801961D8 00192FD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801961DC 00192FDC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801961E0 00192FE0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r28));
/*801961E4 00192FE4*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r29);
/*801961E8 00192FE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r28));
/*801961EC 00192FEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*801961F0 00192FF0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*801961F4 00192FF4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 4);
/*801961F8 00192FF8*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*801961FC 00192FFC*/ PPC::Runtime::ASM::bl(fn_8018C598);
/*80196200 00193000*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x18);
/*80196204 00193004*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80196208, 0x80196208) //this is a jump label
/*80196208 00193008*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8019620C 0019300C*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*80196210 00193010*/ PPC::Runtime::ASM::blt(.L_801961D8);
/*80196214 00193014*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r28));
/*80196218 00193018*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8019621C 0019301C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80196220 00193020*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r28));
/*80196224 00193024*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80196228 00193028*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019622C 0019302C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80196230 00193030*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80196234 00193034*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80196238 00193038*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019623C 0019303C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80196240 00193040*/ PPC::Runtime::ASM::blr();
}