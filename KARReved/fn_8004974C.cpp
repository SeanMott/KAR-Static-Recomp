//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80059CFC.hpp"
#include "fn_80059CFC.hpp"
#include "fn_80077980.hpp"
#include "fn_80078604.hpp"
#include "fn_80078620.hpp"
#include "fn_80078604.hpp"
#include "fn_80078620.hpp"
#include "fn_80077B50.hpp"
#include "fn_800064F0.hpp"
#include "fn_80049250.hpp"
#include "fn_80049250.hpp"
#include "fn_80077ED4.hpp"
#include "fn_8000A498.hpp"



void fn_8004974C(PPC::Runtime::GCContext* context)
{
/*8004974C 0004654C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80049750 00046550*/ PPC::Runtime::ASM::mflr(context->r0);
/*80049754 00046554*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049758 00046558*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8004975C 0004655C*/ PPC::Runtime::ASM::lis(context->r3, fn_80059CFC @ Get_MemoryOffset_HighBit);
/*80049760 00046560*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_80059CFC @ Get_MemoryOffset_LowBit);
/*80049764 00046564*/ PPC::Runtime::ASM::bl(fn_80448220);
/*80049768 00046568*/ PPC::Runtime::ASM::bl(fn_80077980);
/*8004976C 0004656C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_165 @ Get_MemoryOffset_HighBit);
/*80049770 00046570*/ PPC::Runtime::ASM::lis(context->r6, fn_80078604 @ Get_MemoryOffset_HighBit);
/*80049774 00046574*/ PPC::Runtime::ASM::lis(context->r5, fn_80078620 @ Get_MemoryOffset_HighBit);
/*80049778 00046578*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8004977C 0004657C*/ PPC::Runtime::ASM::addi(context->r7, context->r6, fn_80078604 @ Get_MemoryOffset_LowBit);
/*80049780 00046580*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_165 @ Get_MemoryOffset_LowBit);
/*80049784 00046584*/ PPC::Runtime::ASM::addi(context->r8, context->r5, fn_80078620 @ Get_MemoryOffset_LowBit);
/*80049788 00046588*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8004978C 0004658C*/ PPC::Runtime::ASM::li(context->r6, 0x1c);
/*80049790 00046590*/ PPC::Runtime::ASM::bl(fn_80077B50);
/*80049794 00046594*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80049798 00046598*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD578 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8004979C 0004659C*/ PPC::Runtime::ASM::bne(.L_800497A8);
/*800497A0 000465A0*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*800497A4 000465A4*/ PPC::Runtime::ASM::b(.L_80049838);
RUNTIME_PPC_JUMP_LABEL(.L_800497A8, 0x800497A8) //this is a jump label
/*800497A8 000465A8*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*800497AC 000465AC*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*800497B0 000465B0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800497B4 000465B4*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800497B8 000465B8*/ PPC::Runtime::ASM::lis(context->r4, fn_80049250 @ Get_MemoryOffset_HighBit);
/*800497BC 000465BC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD580 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800497C0 000465C0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80049250 @ Get_MemoryOffset_LowBit);
/*800497C4 000465C4*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*800497C8 000465C8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*800497CC 000465CC*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*800497D0 000465D0*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*800497D4 000465D4*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*800497D8 000465D8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800497DC 000465DC*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800497E0 000465E0*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_162 @ Get_MemoryOffset_HighBit);
/*800497E4 000465E4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800497E8 000465E8*/ PPC::Runtime::ASM::addi(context->r3, context->r4, MemoryOffset_162 @ Get_MemoryOffset_LowBit);
/*800497EC 000465EC*/ PPC::Runtime::ASM::bl(fn_HSD_CObjLoadDesc);
/*800497F0 000465F0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800497F4 000465F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800497F8 000465F8*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800497FC 000465FC*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80049800 00046600*/ PPC::Runtime::ASM::lis(context->r4, fn_8042A29C @ Get_MemoryOffset_HighBit);
/*80049804 00046604*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049808 00046608*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8042A29C @ Get_MemoryOffset_LowBit);
/*8004980C 0004660C*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*80049810 00046610*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80049814 00046614*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049818 00046618*/ PPC::Runtime::ASM::lis(context->r4, 0x20);
/*8004981C 0004661C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80049820 00046620*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80049824 00046624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80049828 00046628*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD578 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8004982C 0004662C*/ PPC::Runtime::ASM::bl(fn_80077ED4);
/*80049830 00046630*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*80049834 00046634*/ PPC::Runtime::ASM::bl(fn_8000A498);
RUNTIME_PPC_JUMP_LABEL(.L_80049838, 0x80049838) //this is a jump label
/*80049838 00046638*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004983C 0004663C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80049840 00046640*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80049844 00046644*/ PPC::Runtime::ASM::blr();
}