namespace stack{
	struct Node{
		int value=0;
		int* next=NULL;
		//int* prev=NULL;
	};
	
	class List{
		private:
			Node top;
			Node bottom;
			unsigned content;
		public:
			Stack(){
				content=0;
				top.next=&top;
				//top.prev=&top;
				bottom.next=&top;
				//bottom.prev=&top;
			}
			~Stack(){
				while(top.next!=&bottom){
					Node* tmp = new Node;
					tmp=bottom.next;
					bottom.next=tmp->next;
					delete tmp;
				}
			}
			void push(int i){
				Node* tmp = new Node;
				tmp->value=i;
				Node* tmp2=bottom;
				tmp->next=;
			}
	}
}
