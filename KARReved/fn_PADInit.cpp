//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSRegisterVersion.hpp"
#include "fn_PADSetSpec.hpp"
#include "OSGetTime.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn_SIRefreshSamplingRate.hpp"
#include "OSRegisterResetFunction.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_SIDisablePolling.hpp"
#include "memset.hpp"
#include "fn_PADTypeAndStatusCallback.hpp"
#include "fn_PADTypeAndStatusCallback.hpp"
#include "fn_SIGetTypeAsync.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_PADInit(PPC::Runtime::GCContext* context)
{
/*803DC6D0 003D94D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DC6D4 003D94D4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056E350 @ Get_MemoryOffset_HighBit);
/*803DC6D8 003D94D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DC6DC 003D94DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r1));
/*803DC6E0 003D94E0*/ PPC::Runtime::ASM::stmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DC6E4 003D94E4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8056E350 @ Get_MemoryOffset_LowBit);
/*803DC6E8 003D94E8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDF40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC6EC 003D94EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803DC6F0 003D94F0*/ PPC::Runtime::ASM::beq(.L_803DC6FC);
/*803DC6F4 003D94F4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803DC6F8 003D94F8*/ PPC::Runtime::ASM::b(.L_803DC8D4);
RUNTIME_PPC_JUMP_LABEL(.L_803DC6FC, 0x803DC6FC) //this is a jump label
/*803DC6FC 003D94FC*/ PPC::Runtime::ASM::lwz(context->r3, StructWithStructs_16 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC700 003D9500*/ PPC::Runtime::ASM::bl(OSRegisterVersion);
/*803DC704 003D9504*/ PPC::Runtime::ASM::lwz(context->r3, __PADSpec @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC708 003D9508*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803DC70C 003D950C*/ PPC::Runtime::ASM::beq(.L_803DC714);
/*803DC710 003D9510*/ PPC::Runtime::ASM::bl(fn_PADSetSpec);
RUNTIME_PPC_JUMP_LABEL(.L_803DC714, 0x803DC714) //this is a jump label
/*803DC714 003D9514*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE058 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC718 003D9518*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803DC71C 003D951C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDF40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC720 003D9520*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803DC724 003D9524*/ PPC::Runtime::ASM::beq(.L_803DC7B0);
/*803DC728 003D9528*/ PPC::Runtime::ASM::bl(OSGetTime);
/*803DC72C 003D952C*/ PPC::Runtime::ASM::addi(context->r25, context->r4, 0x0);
/*803DC730 003D9530*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x0);
/*803DC734 003D9534*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803DC738 003D9538*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803DC73C 003D953C*/ PPC::Runtime::ASM::lis(context->r5, 0x1);
/*803DC740 003D9540*/ PPC::Runtime::ASM::subi(context->r27, context->r5, 0x1);
/*803DC744 003D9544*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*803DC748 003D9548*/ PPC::Runtime::ASM::and(context->r6, context->r4, context->r27);
/*803DC74C 003D954C*/ PPC::Runtime::ASM::and(context->r4, context->r25, context->r27);
/*803DC750 003D9550*/ PPC::Runtime::ASM::and(context->r5, context->r3, context->r28);
/*803DC754 003D9554*/ PPC::Runtime::ASM::and(context->r0, context->r26, context->r28);
/*803DC758 003D9558*/ PPC::Runtime::ASM::addc(context->r29, context->r4, context->r6);
/*803DC75C 003D955C*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*803DC760 003D9560*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*803DC764 003D9564*/ PPC::Runtime::ASM::adde(context->r30, context->r0, context->r5);
/*803DC768 003D9568*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*803DC76C 003D956C*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803DC770 003D9570*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r27);
/*803DC774 003D9574*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r28);
/*803DC778 003D9578*/ PPC::Runtime::ASM::addc(context->r29, context->r4, context->r29);
/*803DC77C 003D957C*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*803DC780 003D9580*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*803DC784 003D9584*/ PPC::Runtime::ASM::adde(context->r30, context->r0, context->r30);
/*803DC788 003D9588*/ PPC::Runtime::ASM::li(context->r5, 0x30);
/*803DC78C 003D958C*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803DC790 003D9590*/ PPC::Runtime::ASM::and(context->r0, context->r4, context->r27);
/*803DC794 003D9594*/ PPC::Runtime::ASM::addc(context->r5, context->r0, context->r29);
/*803DC798 003D9598*/ PPC::Runtime::ASM::lis(context->r0, 0xf000);
/*803DC79C 003D959C*/ PPC::Runtime::ASM::li(context->r4, 0x3fff);
/*803DC7A0 003D95A0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDF4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC7A4 003D95A4*/ PPC::Runtime::ASM::and(context->r0, context->r5, context->r4);
/*803DC7A8 003D95A8*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803DC7AC 003D95AC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30e0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803DC7B0, 0x803DC7B0) //this is a jump label
/*803DC7B0 003D95B0*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803DC7B4 003D95B4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30e0, context->r3));
/*803DC7B8 003D95B8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 18, 8);
/*803DC7BC 003D95BC*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x4d00);
/*803DC7C0 003D95C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*803DC7C4 003D95C4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30e0, context->r3));
/*803DC7C8 003D95C8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 18, 8);
/*803DC7CC 003D95CC*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x4d40);
/*803DC7D0 003D95D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*803DC7D4 003D95D4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30e0, context->r3));
/*803DC7D8 003D95D8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 18, 8);
/*803DC7DC 003D95DC*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x4d80);
/*803DC7E0 003D95E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*803DC7E4 003D95E4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30e0, context->r3));
/*803DC7E8 003D95E8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 18, 8);
/*803DC7EC 003D95EC*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x4dc0);
/*803DC7F0 003D95F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*803DC7F4 003D95F4*/ PPC::Runtime::ASM::bl(fn_SIRefreshSamplingRate);
/*803DC7F8 003D95F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804FC530 @ Get_MemoryOffset_HighBit);
/*803DC7FC 003D95FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804FC530 @ Get_MemoryOffset_LowBit);
/*803DC800 003D9600*/ PPC::Runtime::ASM::bl(OSRegisterResetFunction);
/*803DC804 003D9604*/ PPC::Runtime::ASM::lis(context->r28, 0xf000);
/*803DC808 003D9608*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DC80C 003D960C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDF58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC810 003D9610*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803DC814 003D9614*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDF50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC818 003D9618*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x0);
/*803DC81C 003D961C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDF54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC820 003D9620*/ PPC::Runtime::ASM::or(context->r28, context->r28, context->r4);
/*803DC824 003D9624*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC828 003D9628*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r0);
/*803DC82C 003D962C*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC830 003D9630*/ PPC::Runtime::ASM::andc(context->r28, context->r28, context->r5);
/*803DC834 003D9634*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDF44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC838 003D9638*/ PPC::Runtime::ASM::or(context->r6, context->r4, context->r28);
/*803DC83C 003D963C*/ PPC::Runtime::ASM::stw(context->r7, STRUCT_BYTE4_COUNT_1805DDF58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC840 003D9640*/ PPC::Runtime::ASM::andc(context->r4, context->r5, context->r28);
/*803DC844 003D9644*/ PPC::Runtime::ASM::stw(context->r6, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC848 003D9648*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4);
/*803DC84C 003D964C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC850 003D9650*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDF44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC854 003D9654*/ PPC::Runtime::ASM::and(context->r3, context->r0, context->r5);
/*803DC858 003D9658*/ PPC::Runtime::ASM::bne(.L_803DC868);
/*803DC85C 003D965C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDF4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC860 003D9660*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r28);
/*803DC864 003D9664*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDF4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803DC868, 0x803DC868) //this is a jump label
/*803DC868 003D9668*/ PPC::Runtime::ASM::bl(fn_SIDisablePolling);
/*803DC86C 003D966C*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_33 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC870 003D9670*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x20);
/*803DC874 003D9674*/ PPC::Runtime::ASM::bne(.L_803DC8C8);
/*803DC878 003D9678*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC87C 003D967C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r5);
/*803DC880 003D9680*/ PPC::Runtime::ASM::stw(context->r0, StructValues_33 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC884 003D9684*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_33 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC888 003D9688*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x20);
/*803DC88C 003D968C*/ PPC::Runtime::ASM::beq(.L_803DC8C8);
/*803DC890 003D9690*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803DC894 003D9694*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0xc);
/*803DC898 003D9698*/ PPC::Runtime::ASM::srw(context->r3, context->r3, context->r4);
/*803DC89C 003D969C*/ PPC::Runtime::ASM::andc(context->r4, context->r5, context->r3);
/*803DC8A0 003D96A0*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*803DC8A4 003D96A4*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC8A8 003D96A8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803DC8AC 003D96AC*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803DC8B0 003D96B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10);
/*803DC8B4 003D96B4*/ PPC::Runtime::ASM::bl(memset);
/*803DC8B8 003D96B8*/ PPC::Runtime::ASM::lis(context->r4, fn_PADTypeAndStatusCallback @ Get_MemoryOffset_HighBit);
/*803DC8BC 003D96BC*/ PPC::Runtime::ASM::lwz(context->r3, StructValues_33 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC8C0 003D96C0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_PADTypeAndStatusCallback @ Get_MemoryOffset_LowBit);
/*803DC8C4 003D96C4*/ PPC::Runtime::ASM::bl(fn_SIGetTypeAsync);
RUNTIME_PPC_JUMP_LABEL(.L_803DC8C8, 0x803DC8C8) //this is a jump label
/*803DC8C8 003D96C8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803DC8CC 003D96CC*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DC8D0 003D96D0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803DC8D4, 0x803DC8D4) //this is a jump label
/*803DC8D4 003D96D4*/ PPC::Runtime::ASM::lmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DC8D8 003D96D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803DC8DC 003D96DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x38);
/*803DC8E0 003D96E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DC8E4 003D96E4*/ PPC::Runtime::ASM::blr();
}